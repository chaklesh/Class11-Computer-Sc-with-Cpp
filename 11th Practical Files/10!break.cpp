#include<iostream.h>
#include<conio.h>
int main ()
{
clrscr();
int i;
cout<<"The loop with Break \n";
for(i=1;i<=10;i++)
if((i%3)==0)
break;
else
cout<<i<<endl;
return 0;
}
