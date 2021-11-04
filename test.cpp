#include<iostream>

#include"add/add.h"

#include"external/glfw/include/GLFW/glfw3.h"

using namespace std;

int main()
{
	cout << "hello" << endl;

	cout << add(3.2, 4.2) << endl;


	GLFWwindow *window;

	if( !glfwInit() )
	{
	  fprintf( stderr, "Failed to initialize GLFW\n" );
	  exit( EXIT_FAILURE );
	}

//	glfwWindowHint(GLFW_DEPTH_BITS, 16);
//	glfwWindowHint(GLFW_TRANSPARENT_FRAMEBUFFER, GLFW_TRUE);



  	window = glfwCreateWindow( 300, 300, "Gears", NULL, NULL );

	if (!window)
	{
	  fprintf( stderr, "Failed to open GLFW window\n" );
	  glfwTerminate();
	  exit( EXIT_FAILURE );
	}




	// Main loop
	while( !glfwWindowShouldClose(window) )
	{
		// Swap buffers
	  	glfwSwapBuffers(window);
	  	glfwPollEvents();
	}

	// Terminate GLFW
	glfwTerminate();

	// Exit program
	exit( EXIT_SUCCESS );



}


