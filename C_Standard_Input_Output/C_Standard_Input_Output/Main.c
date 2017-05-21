// An C Basic Calculator
// Author: Codeleton011
// Date: 2017. 05. 21

// Codeleton011

#define _CRT_SECURE_NO_WARNINGS // Disable unsafe errors
#include <stdio.h>

// Main
int main()
{
	char str[50];

	// IO with gets and puts

	printf("Enter a value:");
	gets(str);

	printf("\nYou entered:");
	puts(str);

	char str2[50];
	int i;

	printf("Enter a value:");
	scanf("%s %d", str2, &i);

	printf("You entered: %s %d", str2, i);

	getchar(); // Prevent cmd closing

	return 0;
}