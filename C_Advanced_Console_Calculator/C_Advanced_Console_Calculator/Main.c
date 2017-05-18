// An C Advanced console calculator
// Author: Codeleton011
// Date: 2017. 05. 17

#define _CRT_SECURE_NO_WARNINGS // Disable compiler warnings scanf
#include <stdio.h>

// Pre-defined methods
float add(float a, float b);
float div(float a, float b);
float mul(float a, float b);
float sub(float a, float b);

float a; // First number
float b; // Second number
float sum; // Summary

char answ; // Storing the letters

// Main
int main()
{
	printf("*******************************\n");
	printf("Advanced console calculator\n");
	printf("Please select an operation\n");
	printf("Addition - A\n");
	printf("Division - D\n");
	printf("Multiplication - M\n");
	printf("Subtraction - S\n");
	printf("Exit app - E\n");
	printf("*******************************\n");
	printf("Your answer: ");
	answ = getchar();

	// Switch for operations
	switch (answ)
	{
	case 'A':
		printf("Addition: \n");
		printf("First number:");
		scanf("%f", &a);
		printf("\n");
		printf("Second number:");
		scanf("%f", &b);

		sum = add(a, b);

		printf("Sum: %f \n", sum);
		printf("Press enter for continue...");
		getchar();
		getchar();
		system("cls");
		return main();

	break;
	case 'D':
		printf("Division: \n");
		printf("First number:");
		scanf("%f", &a);
		printf("\n");
		printf("Second number:");
		scanf("%f", &b);

		sum = div(a, b);

		printf("Sum: %f \n", sum);
		printf("Press enter for continue...");
		getchar();
		getchar();
		system("cls");
		return main();

	break;
	case 'M':
		printf("Multiplication: \n");
		printf("First number:");
		scanf("%f", &a);
		printf("\n");
		printf("Second number:");
		scanf("%f", &b);

		sum = mul(a, b);

		printf("Sum: %f \n", sum);
		printf("Press enter for continue...");
		getchar();
		getchar();
		system("cls");
		return main();

	break;
	case 'S':
		printf("Subtraction: \n");
		printf("First number:");
		scanf("%f", &a);
		printf("\n");
		printf("Second number:");
		scanf("%f", &b);

		sum = sub(a, b);

		printf("Sum: %f \n", sum);
		printf("Press enter for continue...");
		getchar();
		getchar();
		system("cls");
		return main();

	break;
	case 'E':
		exit(0);
	break;
	}

}
float add(float a, float b)
{
	return a + b;
}
float div(float a, float b)
{
	return a - b;
}
float mul(float a, float b)
{
	return a * b;
}
float sub(float a, float b)
{
	return a / b;
}