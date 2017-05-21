// C_Global_variables
// Author: Codeleton011
// Date: 2017. 05. 21

// Codeleton011

#include <stdio.h>

int globalVar = 20; // This int is a global variable

// Main
int main()
{
	globalVar = globalVar + 100;

	printf("Sum: %d", globalVar);

	getchar(); // Prevent cmd closing

	return 0;
}
