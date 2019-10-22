cmake_minimum_required(VERSION 3.13)
project(Creatio)

set(CMAKE_CXX_STANDARD 17)

set(GLEW_H /usr/local/Cellar/glew/2.1.0/include/GL)
set(GLFW_H /usr/local/Cellar/glfw/3.2.1/include/GLFW)
include_directories(${GLEW_H} ${GLFW_H})

set(GLEW_LINK /usr/local/Cellar/glew/2.1.0/lib/libGLEW.2.1.dylib)
set(GLFW_LINK /usr/local/Cellar/glfw/3.2.1/lib/libglfw.3.dylib)
link_libraries(${OPENGL} ${GLEW_LINK} ${GLFW_LINK})

set(SOURCE_FILES main.cpp)
add_executable(Creatio main.cpp logging/CrashLog.cpp logging/CrashLog.h logging/CrashCause.cpp logging/CrashCause.h display/texture/TextureMap.cpp display/texture/TextureMap.h util/struct/Singleton.h util/struct/Singleton.cpp kernel/state/StateMachine.cpp kernel/state/StateMachine.h kernel/state/State.cpp kernel/state/State.h display/render/Camera.cpp display/render/Camera.h kernel/application/Creatio.cpp kernel/application/Creatio.h util/math/Vec3f.cpp util/math/Vec3f.h)

if (APPLE)
    target_link_libraries(Creatio "-framework OpenGL")
endif()