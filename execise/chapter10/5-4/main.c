#include<stdio.h>

int main(void)
{
	struct employee
	{
		char name[50];
		int number;
		char gender;
		int age;
		char address[100];
		int balance;
	} employee;
	FILE* inFile, * outFile;

	inFile = fopen("employee.dat", "r");
	outFile = fopen("payment.dat", "w");

	while (!feof(inFile))
	{
		fscanf(inFile, "%s %d %c", employee.name, &employee.number, &employee.gender);
		fscanf(inFile, "%d %s %d", &employee.age, employee.address, &employee.balance);
		fprintf(outFile, "%s %d %d\n", employee.name, employee.number, employee.balance);
	}

	fclose(inFile);
	fclose(outFile);

	return 0;
}