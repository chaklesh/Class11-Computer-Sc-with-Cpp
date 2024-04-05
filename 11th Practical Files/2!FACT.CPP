#include<iostream.h>
#include<conio.h>
void main()
{
int num,fact=1,i=1;
clrscr();
cout<<"Enter the Number:";
cin>>num;
while(i<=num)
{
fact=fact*i;
i++;
}
cout<<"The Factorial is:"<<fact;
}