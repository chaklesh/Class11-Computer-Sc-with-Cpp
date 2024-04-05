
#include <iostream.h>
struct student
{
	char name[20],gender[10];
	int  roll;
};
int main()
{
	student stud = {"Chaklesh Yadav", "Male", 11 };
	student stud1;
	stud1 = stud;
	stud1.roll = 33;
	cout << "\n Name    : " << stud1.name;
	cout << "\n Roll no : "  << stud1.roll;
	cout << "\n Gender  : " << stud1.gender;
	cout << "\n Class   : " << stud.roll;
	return 0;
}
