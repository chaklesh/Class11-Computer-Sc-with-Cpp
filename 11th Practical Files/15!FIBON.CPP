#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,a,b,c,n;
a=0;
b=1;
cout<<"How many Elements of Series";
cin>>n;
cout<<a<<" "<<b;
for(i=2;i<n;++i)
{
c=a+b;
cout<<" "<<c;
a=b;
b=c;
}
}
