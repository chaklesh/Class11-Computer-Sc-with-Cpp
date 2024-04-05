#include<iostream.h>
#include<conio.h>
#include<string.h>
int main ()
{
clrscr();
char a[20],b[20];
cout<<"Enter a String:";
cin.get(a,20);
strcpy(b,a);
strrev(a);
if(strcmp(b,a)==0)
cout<<"String is Pallindrome";
else
cout<<"String is not Pallindrome";
getch();
return 0;
}