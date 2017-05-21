// C_1_dimension_array
// Author: Codeleton011
// Date: 2017. 05. 21

// Codeleton011

#include <stdio.h>

// Main
int main()
{
	// Char storing 5 numbers
	char numbers[5] = { 1, 2, 3, 4, 5 };

	// Access the array with for loop
	for (int i = 0; i < 5; i++)
	{
		printf("Numbers[%d] = %d \n", i, numbers[i]);
	}

	getchar(); // Prevent cmd closing

	return 0;
}
