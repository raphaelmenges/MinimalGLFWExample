#include "gl_core_3_3.h"
#include "glfw/include/GLFW/glfw3.h"

int main()
{
    // GLFW and OpenGL initialization
    glfwInit();
    GLFWwindow* window = glfwCreateWindow(1280, 720, "OpenGL Application", NULL, NULL);
    glfwMakeContextCurrent(window);
    ogl_LoadFunctions();

    // Main loop
    while (!glfwWindowShouldClose(window))
    {
        // Clearing of buffers
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

   			// Do rendering

        // Swap front and back buffers and poll events
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    // Termination of program
    glfwTerminate();
    return 0;
}
