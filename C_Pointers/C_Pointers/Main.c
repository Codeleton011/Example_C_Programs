// C_Pointers
// Author: Codeleton011
// Date: 2017. 05. 21

// Codeleton011

#include <stdio.h>

// Main
int main()
{
	int num = 10;

	int* p = &num;

	printf("Number: %d \n", num);

	printf("Memory address of the number: %d \n", &num);

	printf("A pointer pointing to num: %d \n", *p);

	getchar(); // Prevent cmd closing

	return 0;
}
