#include<iostream.h>
#include<conio.h>
int main ()
{
clrscr();
int year;
cout<<"Enter Year";
cin>>year;
if(year%100==0)
{
if(year%400==0)
cout<<"Leap Year";
}
else
cout<<"Not Century Year";
return 0;
}