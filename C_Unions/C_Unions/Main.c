// C_Unions
// Author: Codeleton011
// Date: 2017. 05. 21

// Codeleton011

#define _CRT_SECURE_NO_WARNINGS // Disable strcpy unsafe error
#include <stdio.h>
#include <string.h>

// Union
union Employee{
	int sallary;
	char name[50];
	int foo;
};

// Main
int main()
{
	// Access to an union
	union Employee emp1;

	emp1.sallary = 10000;
	printf("Employee sallary: %d \n", emp1.sallary);

	strcpy(emp1.name, "John");
	printf("Employee name: %s \n", emp1.name);

	emp1.foo = 10;
	printf("Foo: %d \n", emp1.foo);

	getchar(); // Prevent cmd closing

	return 0;
}
