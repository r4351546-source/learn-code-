#include <glad/glad.h>
#include <GLFW/glfw3.h>

int main() {
    GLFWwindow* window = glfwCreateWindow(
        1280, 1280, "gl", nullptr, nullptr
    );
glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

glfwMakeContextCurrent(window);

while (!glfwWindowShouldClose(window)) {
    glClearColor(0.10f, 0.12f, 0.18f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glfwSwapBuffers(window);
    glfwPollEvents();
}
} 