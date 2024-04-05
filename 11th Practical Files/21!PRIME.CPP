#include<iostream.h>
#include<process.h>
#include<conio.h>
int main()
{
clrscr();
int num,i;
cout<<Enter The Number:";
cin>>num;
for(i=2;i<=num/2;++i)
if(num%i==0)
{
cout<<"\n Not A Prime Number!!";
}
cout<<"\n It is A Primr Number";

return 0;
}