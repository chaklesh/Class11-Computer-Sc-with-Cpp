#include<iostream.h>
#include<conio.h>
#include<string.h>
int main ()
{
clrscr();
int stock[ ]={10,12,22,15,18};
int total=0;
for(int i=0;i<5;++i)
if(stock[i]>15)
total+=stock[i];
cout<<"Total="<<total<<endl;
return 0;
}