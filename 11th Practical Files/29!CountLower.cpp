#include<iostream.h>
#include<stdio.h>
int main()
{
    int chcount=0;
   const char ent='\n';
   char ch;
   cout<<"Enter Any Character";
   cin.get(ch);
   while(ch!=ent)
   {

       if(ch>='a'&& ch<='z')
       {

           chcount++;
           cout.put(ch);
        }
        cin.get(ch);

   }
   cout<<"The Number of Lowercase Characters="<<chcount<<"\n";
   return 0;
  }
