#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
int i;
char str[20];
cout<<"\n Enter Any String:";
gets(str);
for(i=0;str[i]!='\0';++i);
cout<<"\n Length of String is :"<<i;

}