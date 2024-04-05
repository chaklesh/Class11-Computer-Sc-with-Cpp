#include <iostream.h>
struct Point
{
	int X,Y;
};
void Show(Point  P)
{
	cout << P.X << " : " << P.Y << endl;
}
int main( )
{
	Point  U = {20, 10}, V, W;
	V = U;
	V.X +=20;
	W = V;
	U.Y+=10;
	U.X+=5;
	W.X -= 5;
	Show(U);
	Show(V);
	Show(W);
	return 0;
}
