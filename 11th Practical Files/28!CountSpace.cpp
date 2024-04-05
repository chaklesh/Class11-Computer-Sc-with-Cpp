#include<iostream.h>
#include<stdio.h>
int main()
{
    int i,count=0;
   char str[40];
   cout<<"Enter Any String";
   gets(str);
   for(i=0;str[i]!='\0';i++)
   if(str[i]==' ')
   {
   count++;
   }
   cout<<"Number of Spaces in String are:"<<count;
   return 0;
  }
