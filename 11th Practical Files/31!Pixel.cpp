// Filename: \\U1Chap03\ch03_20.CPP
#include <iostream.h>
struct Pixels
{ int Color, Style;};
void ShowPoint(Pixels P)
{
	cout << P.Color << P.Style << endl;
}
int main()
{
	Pixels Point1 = {5, 3};
	ShowPoint(Point1);
	Pixels Point2 = Point1;
	Point1.Color+=2;
	ShowPoint(Point2);
	return 0;
}
