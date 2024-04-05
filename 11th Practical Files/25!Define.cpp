
#include <iostream.h>
#define PI 3.14159
#define CIRCLE_AREA(x) (PI * (x) * (x))
int main()
{
	float area;
	int r;
	cout << "Enter the radius : ";
	cin >> r;
	area = CIRCLE_AREA(r);
	cout << "Area is : " << area;
	return 0;
}
