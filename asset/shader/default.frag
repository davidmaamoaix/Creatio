#version 410 core

layout(location = 0) out vec4 color;

uniform vec4 uniformColor;

void main() {
   color = uniformColor;
}