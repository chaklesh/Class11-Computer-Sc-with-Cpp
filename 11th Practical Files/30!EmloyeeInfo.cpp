
#include <iostream.h>
#include <string.h>
#include <conio.h>
int main()
{

	struct Employee
	{
		int empcode;
		char empname[28];
		char empdesig[15];
		float empsalary;
	} emp1;
	int i;
	emp1.empcode = 100;
	strcpy(emp1.empname, "Mrs. Mitali Mukherjee\n");
	strcpy(emp1.empdesig, "Teacher");
	emp1.empsalary = 15000.00;

	cout << "Here is the employee information : \n";
	for (i = 1; i <= 32; i++)
		cout << "=";
	cout << "\nEmployee code : " << emp1.empcode;
	cout << "\nEmployee name : " << emp1.empname;
	cout << "\nEmployee designation : " << emp1.empdesig;
	cout << "\nEmployee salary : " << emp1.empsalary;
	return 0;
}
