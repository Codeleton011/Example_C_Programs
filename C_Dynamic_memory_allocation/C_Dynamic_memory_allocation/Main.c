// C_Dynamic_memory_allocation
// Author: Codeleton011
// Date: 2017. 05. 18

#include <stdio.h>

// Employee structure
typedef struct{
	int age;
	char name;
	float sallary;
} employee;

// Main
int main()
{
	//Dynamic mem alloc
	employee * em1 = malloc(sizeof(employee));

	em1->age = 20;
	em1->name = "Employee1";
	em1->sallary = 40000;

	//Print informations to the screen
	printf("Employee information: \n");
	printf("Name: %s", em1->name);
	printf("Age: %d", em1->age);
	printf("Sallary: %f", em1->sallary);

	return 0;
}