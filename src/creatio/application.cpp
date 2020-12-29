#include "application.h"

#include <string>
#include <iostream>

#include "../config/settings.h"
#include "../render/shader/shader.h"
#include "../util/logging.h"

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

    Logging::printVersions();

    return true;
}

void Application::loop() {
    GLfloat pos[] = {
        -0.5f, -0.5f,
        0, 0.5f,
        0.5f, -0.5f,
    };

    std::string vertSrc =
        "#version 410 core\n"
        "layout(location = 0) in vec4 position;\n"
        "void main() {\n"
        "   gl_Position = position;\n"
        "}";

    std::string fragSrc =
        "#version 410 core\n"
        "layout(location = 0) out vec4 color;\n"
        "void main() {\n"
        "   color = vec4(1, 0, 0, 1);\n"
        "}";

    GLuint buf;
    glGenBuffers(1, &buf);
    glBindBuffer(GL_ARRAY_BUFFER, buf);
    glBufferData(GL_ARRAY_BUFFER, sizeof(pos), pos, GL_STATIC_DRAW);

    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(GLfloat) * 2, nullptr);

    Shader shader{vertSrc, fragSrc};

    while (!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT);

        glDrawArrays(GL_TRIANGLES, 0, 3);

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
}