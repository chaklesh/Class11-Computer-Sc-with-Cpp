#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int x,y,z,max;
cout<<"Enter The Numbers:";
cin>>x>>y>>z;
max=x;
if(y>max)
max=y;
if(z>max)
max=z;
cout<<"\n The Greatest is:"<<max;
}