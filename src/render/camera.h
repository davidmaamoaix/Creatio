#pragma once

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

class Camera {

public:
    Camera();

    glm::mat4 getViewMatrix();

    void rotate(float xOffset, float yOffset);

private:
    float x, y, z;
    float pitch, yaw;
};