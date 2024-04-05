#include<iostream.h>
#include<conio.h>
#include<math.h>
int main ()
{
clrscr();
int n,m=0,x,y;
cout<<"Enter Number:";
cin>>n;
y=n;
while(n!=0)
{
x=n%10;
m+=pow(n,3);
n=n/10;
}
if(y==m)
cout<<"The Number is an Armstrong";
else
cout<<"The Number is not an Armstrong";
getch();
return 0;
}