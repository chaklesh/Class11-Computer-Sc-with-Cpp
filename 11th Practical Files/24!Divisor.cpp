#include<iostream.h>
int main()
{
    int num,i;
    cout<<"Enter an Integer:";
    cin>>num;
    for(i=2;i<=num/2;++i)
    {
        if(num%i==0)
            cout<<"\n" <<i;
    }

   return 0;
}
