// An C Basic Calculator
// Author: Codeleton011
// Date: 2017. 05. 18

// Codeleton011

#define _CRT_SECURE_NO_WARNINGS // Disable scanf warnings
#include <stdio.h>

float a;
float b;
float c;
float sum;

// Main
int main()
{
	printf("Welcome to basic c calculator!\n");
	printf("First number:");
	scanf("%f", &a); // User types the A number
	printf("\n");
	printf("Second number:");
	scanf("%f", &b); // User types the B number
	
	c = a + b; // Sum

	printf("Sum: %f", c);

	getchar(); // Prevent cmd closed
}