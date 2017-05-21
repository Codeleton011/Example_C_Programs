// An C Basic Calculator
// Author: Codeleton011
// Date: 2017. 05. 21

// Codeleton011

#include <stdio.h>

// Main
int main()
{
	//                   1->5 numbers        2->5 numbers        3->5 numbers
	char numbers[][5] = { { 1, 2, 3, 4, 5 }, { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 } };

	// Access into numbers with double loop
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("Numbers[%d][%d] = %d \n", i, j, numbers[i][j]);
		}
	}

	getchar(); // Prevent cmd closing

	return 0;
}