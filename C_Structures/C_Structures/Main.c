// An C Basic Calculator
// Author: Codeleton011
// Date: 2017. 05. 21

// Codeleton011

#define _CRT_SECURE_NO_WARNINGS // Disable strcpy unsafe error
#include <stdio.h>
#include <string.h>

// Employee -> Structure
struct Employee{
	char name[50];
	char rank[50];
	int sallary;
};

void printEmployee(struct Employee *em);

// Main
int main()
{
	// Declare new Employee
	struct Employee emp1;

	// strcpy from string.h -> strcpy(destination, source);
	strcpy(emp1.name, "John");
	strcpy(emp1.rank, "Admin");
	
	emp1.sallary = 10000;

	//Employee *em pointing to &emp1
	printEmployee(&emp1);

	getchar(); // Prevent cmd closing

	return 0;
}

// Employee *em pointing to an employee
void printEmployee(struct Employee *em)
{
	// Access to pointer ID->var
	printf("Employee name: %s \n", em->name);
	printf("Employee rank: %s \n", em->rank);
	printf("Employee sallary: %d \n", em->sallary);
}