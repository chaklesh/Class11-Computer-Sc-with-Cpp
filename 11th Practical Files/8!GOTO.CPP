#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
float num,avg,sum=0;
int i,n,jump;
cout<<"Maximum Number of Inputs";
cin>>num;
for(i=1;i<=n;++i)
{
cout<<"Ener Number "<<i;
cout<<" ";
cin>>num;
if(num<sum)
{
goto jump;
}
sum+=num;
jump:
avg=sum/(i-1);
cout<<"\n Average ="<<avg;
  return 0;
}}
