#include "camera.h"

#include "config/settings.h"

Camera::Camera()
: x(0)
, y(0)
, z(0) {

}

glm::mat4 Camera::getViewMatrix() {
    glm::mat4 proj = glm::perspective(
        glm::radians(FOV), 1.0f, 0.1f, 100.0f);

    glm::mat4 view = glm::translate(glm::mat4{1.0f}, glm::vec3(-x, -y, -z));


    return proj * view;
}