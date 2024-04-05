#include<iostream.h>
int main()
{
    void swap(int&,int&);
    int a,b;
    a=7;
    b=4;
    cout<<"The Original Value are:"<<"\na="<<a<<" b="<<b<<"\n";
    swap(a,b);
    cout<<"The Value after Swap() are: \n";
    cout<<"a="<<a<<" b="<<b<<"\n";
    return 0;
}
void swap(int&x,int&y)
{

    int temp;
    temp=x;
    x=y;
    y=temp;
}
