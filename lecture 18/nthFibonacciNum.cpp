// love bubber lecture
//find the nth fibonacci number 

// fibonacci series starts from 0 
// 0 ,1, 1, 2, 3, 5, 8, 13...........

// fibonacci number is calculated by adding previous two fibonacci number 

#include<iostream>
using namespace std;

int nthfibonacci(int n)
{
    if(n==0||n==1) //base case
    {
        return n;
    }

    return nthfibonacci(n-1) + nthfibonacci(n-2); //recurance relation 


    // -------------------  OR Without Recursion-----------------

    // int a=0;
    // int b =1;
    // int c;

    // for(int i=2;i<=n;i++)
    // {
    //     c=a+b;
    //     a=b;
    //     b=c;
    // }

    // return c;
}




int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;

    cout<<nthfibonacci(n);

    return 0;
}
