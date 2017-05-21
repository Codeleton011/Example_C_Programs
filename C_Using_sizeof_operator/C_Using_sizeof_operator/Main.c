// C_Using_sizeof_operator
// Author: Codeleton011
// Date: 2017. 05. 21

// Codeleton011

#include <stdio.h>
#include <limits.h>

// Main
int main()
{
	// Get storage size of the objects or type in bytes 
	printf("Int size: %d \n", sizeof(int));
	printf("Float size: %d \n", sizeof(float));
	printf("Char size: %d \n", sizeof(char));
	printf("Double size: %d \n", sizeof(double));
	printf("Long size: %d \n", sizeof(long));


	getchar(); // Prevent cmd closing

	return 0;

}