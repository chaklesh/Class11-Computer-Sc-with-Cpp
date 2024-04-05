#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int n,num,digit,rev=0;
cout<<"Input the Number:";
cin>>num;
n=num;
do
{
digit=num%10;
rev=(rev*10)+digit;
num=num/10;
}
while(num!=0);
{
cout<<"The Reverese of No. is:"<<rev<<"\n";
if(n==rev)
cout<<"The Number is Pallindrome"<<"\n";
else
cout<<"The Number is Not a Pallindrome"<<"\n";
}
return 0;
}