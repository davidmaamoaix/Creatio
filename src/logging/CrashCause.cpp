#include <string>

#include "CrashCause.h"

std::string CrashCause::FILE_NOT_FOUND = "ERROR::ASSETS::FILE_NOT_FOUND";
std::string CrashCause::SHADER_COMPILE_ERROR = "ERROR::ASSETS::SHADER_COMPILE_ERROR";

std::string CrashCause::GLFW_ERROR = "ERROR::KERNEL::GLFW_ERROR";
std::string CrashCause::OPENGL_ERROR = "ERROR::KERNEL::OPENGL_ERROR";