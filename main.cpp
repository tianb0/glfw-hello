#include <GLFW/glfw3.h>
#include <cstdio>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>

int main() {

  GLFWwindow *window;

  glfwInit();

  window = glfwCreateWindow(600, 600, "hello", NULL, NULL);


  while(!glfwWindowShouldClose(window)) {
    // swap buffers
    glfwSwapBuffers(window);
    glfwPollEvents();
  }

  glfwTerminate();

  return 0;
}
