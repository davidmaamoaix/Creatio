# Creatio
A rewrite of Minecraft in C++ for learning purposes.

I've decided to dump this project but WOW literature class is boring.

## Dependencies
- Some GL related libraries via `brew install glfw glew glm`
- `stb_image`

## Modding?
Unfortunately no, as we cannot dynamically load classes similarly to Java here (think of the Forge API) (well technically you still could but not as smoothly). ASM injection is also not a good idea as we are sensible people who do not want to send others' OS into panic from some poorly/untimely dispatched compute shaders :P.
