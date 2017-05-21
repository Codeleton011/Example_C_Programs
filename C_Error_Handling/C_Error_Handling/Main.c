// C_Error_Handling
// Author: Codeleton011
// Date: 2017. 05. 21

#include <stdio.h>
#include <stdlib.h>

// Main
int main()
{
	int divident = 234;
	int divisor = 0;
	int q;

	if (divisor == 0)
	{
		fprintf(stderr, "Zero Division Error!");
		getchar();
		exit(-1);
	}
	// This code is not executed because the divisor is 0
	q = divident / divisor;
	fprintf(stderr, "Value of quotient : %d\n", q);

	return 0;
}