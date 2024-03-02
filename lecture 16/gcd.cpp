// Q) find the GCD (greatest common diviser) of two numbers 

#include<iostream>
using namespace std;

int GCD (int a,int b)
{
    while(b!=0)
    {
        int remainder = a%b;
        a=b;
        b=remainder;

    }

    return a;
}
int main()
{   int a,b;
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;

    cout<<GCD(a,b);

    return 0;
}