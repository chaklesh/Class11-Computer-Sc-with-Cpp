#include<iostream.h>
#include<conio.h>
int main ()
{
clrscr();
int i;
cout<<"The loop with Continue \n";
for(i=1;i<=10;i++)
if((i%3)==0)
continue;
else
cout<<i<<endl;
return 0;
}
