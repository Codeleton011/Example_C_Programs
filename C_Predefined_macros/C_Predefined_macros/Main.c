// C_Predefined_macros
// Author: Codeleton011
// Date: 2017. 05. 21

#include <stdio.h>

// Main
int main()
{
	printf("File :%s\n", __FILE__);
	printf("Date :%s\n", __DATE__);
	printf("Time :%s\n", __TIME__);
	printf("Line :%d\n", __LINE__);

	getchar(); // Prevent cmd closing
	
	return 0;
}