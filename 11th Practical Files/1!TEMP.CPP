#include<iostream.h>
#include<conio.h>
int main()
{
int choice;
float temp,tc;
clrscr();
cout<<"Temperature Conversion Menu"<<"\n";
cout<<"1.Fahrenheit to Celcius"<<"\n";
cout<<"2.Celcius to Fahrenheit"<<"\n";
cout<<"Enter your choice(1-2):";
cin>>choice;
if(choice==1)
{
cout<<"\n"<<"Enter temp in F:";
cin>>temp;
tc=(temp-32)/1.8;
cout<<"The Temp. in Celcius:"<<tc;
}
else
{
cout<<"Enter temp in Celcius:";
cin>>temp;
tc=(1.8*temp)+32;
cout<<"Temperature in Fahrenheit"<<tc;
}
}


