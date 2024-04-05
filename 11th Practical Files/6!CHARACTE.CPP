#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
char ch;
cout<<"Enter a Character:";
cin>>ch;
if(((ch>='A')&&(ch='Z'))||((ch>='a')&&(ch<='z')))
cout<<"You entered a Alphabet"<<"\n";
else
if(ch>='0'&&ch<='9')
cout<<"You entered a Digit";
else
cout<<"You enter Other Character";
return 0;
}