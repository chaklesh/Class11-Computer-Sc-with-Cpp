#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
int i,m,count=1,len;
char str[20];
cout<<"\n Enter Any String:";
gets(str);
for(i=0;str[i]!='\0';++i);
for(m=0;str[m]!='\0';++m);
{
if(str[i]==' ')
{
count++;
while(str[i]==' ')
i++;
}
if(str[i]=='\0')
i--;
}
len=m-count;
cout<<"\n Number of Words in Above String are :"<<len+1;

}
