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
add_executable(Creatio main.cpp src/util/math/facing.cpp src/util/math/facing.h src/world/chunk.cpp src/world/chunk.h src/block/block.cpp src/block/block.h src/block/blockstate.h src/block/blockstate.cpp src/block/block.cpp src/block/block.h src/util/math/blockpos.cpp src/util/math/blockpos.h src/world/world.cpp src/world/world.h src/render/camera.cpp src/render/camera.h src/creatio/application.cpp src/creatio/application.h src/util/math/hashing.cpp src/util/math/hashing.h src/render/shader/shader.cpp src/render/shader/shader.h src/util/logging.cpp src/util/logging.h src/vendor/stb/stb_image.h src/render/texture.cpp src/render/texture.h)

file(COPY asset DESTINATION ${CMAKE_BINARY_DIR})

include_directories(src/vendor src)

if (APPLE)
    target_link_libraries(Creatio "-framework OpenGL")
endif()