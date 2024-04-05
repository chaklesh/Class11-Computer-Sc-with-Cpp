#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
for(int i=1; ;)
{
cout<<i<<" ";
if(i==128)
break;
i*=2;
}
return 0;
}