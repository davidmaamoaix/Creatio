#include "application.h"

#include <string>
#include <iostream>

#include "config/settings.h"
#include "render/shader/shader.h"
#include "util/logging.h"
#include "render/texture.h"

Application &Application::get() {
    static Application app;

    return app;
}

bool Application::launch() {
    if (!glfwInit()) {
        std::cout << "GLFW INITIALIZATION FAILED" << std::endl;
        return false;
    }

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);

    window = glfwCreateWindow(
        WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_TITLE, nullptr, nullptr
    );

    if (!window) {
        glfwTerminate();
        return false;
    }

    glfwMakeContextCurrent(window);

    glewExperimental = GL_TRUE;
    if (glewInit() != GLEW_OK) {
        std::cout << "GLEW INITIALIZATION FAILED" << std::endl;
        return false;
    }

    Logging::printVersions();

    return true;
}

void Application::loop() {
    GLfloat pos[] = {
        -0.5f, -0.5f, 0.0f, 0.0f,
        0.5f, -0.5f, 1.0f, 0.0f, // correct
        0.5f, 0.5f, 1.0f, 1.0f,
        -0.5f, 0.5f, 0.0f, 1.0f // correct
    };

    GLuint indices[] = {
        0, 1, 2,
        2, 3, 0
    };

    std::string vertSrc = "asset/shader/default.vert";

    std::string fragSrc = "asset/shader/default.frag";

    GLuint vao;
    glGenVertexArrays(1, &vao);
    glBindVertexArray(vao);

    GLuint buf;
    glGenBuffers(1, &buf);
    glBindBuffer(GL_ARRAY_BUFFER, buf);
    glBufferData(GL_ARRAY_BUFFER, sizeof(pos), pos, GL_STATIC_DRAW);
    glBindBuffer(GL_ARRAY_BUFFER, buf);

    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, sizeof(GLfloat) * 4, nullptr);

    glEnableVertexAttribArray(1);
    glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, sizeof(GLfloat) * 4, (void *) 8);

    GLuint indexBuf;
    glGenBuffers(1, &indexBuf);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, indexBuf);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

    glBindVertexArray(0);

    Shader shader{vertSrc, fragSrc};
    shader.bind();

    Texture tex{"asset/texture/block/dirt.png"};
    tex.bind();

    //GLint varColor = shader.getUniformLocation("uniformColor");
    GLint varTex = shader.getUniformLocation("texSampler");

    glBindVertexArray(vao);
    while (!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT);

        //glUniform4f(varColor, 0.5f, 0.5f, 1.0f, 1.0f);
        glUniform1i(varTex, 0);

        glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, nullptr);
        Logging::logGLError();

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
}