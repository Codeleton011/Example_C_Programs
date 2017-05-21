// C_Using_header_files
// Author: Codeleton011
// Date: 2017. 05. 21

#include "test.h" // Contains #include <stdio.h>

// Main
int main()
{
	int a = 20;

	printf("Area of the cube: %d", getCubeArea(a));

	getchar(); // Prevent cmd closing

	return 0;
}