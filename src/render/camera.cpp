#include "camera.h"

#include "config/settings.h"

Camera::Camera() {
    z = 1;
}

void Camera::rotate(float x, float y) {
    pitch += y;
    yaw += x;
}

glm::mat4 Camera::getViewMatrix() {
    glm::mat4 proj = glm::perspective(
        glm::radians(Settings::FOV), 1.0f, 0.1f, 100.0f);

    glm::vec3 front{
        -cos(glm::radians(pitch)) * sin(glm::radians(yaw)),
        sin(glm::radians(pitch)),
        -cos(glm::radians(pitch)) * cos(glm::radians(yaw)),
    };

    glm::vec3 pos{x, y, z};

    glm::mat4 view = glm::lookAt(pos, front, {0, 1, 0});

    return proj * view;
}