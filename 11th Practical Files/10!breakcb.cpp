#include<iostream.h>

int main ()
{

int i;
cout<<"The loop with Break \n";
for(i=1;i<=10;i++)
if((i%3)==0)
break;
else
cout<<i<<endl;
return 0;
}
