// find the value of 2^n
// //loveBubber lecture
#include<iostream>
using namespace std;

int power(int n)
{
    if(n==0)
    {
        return 1;

    }

    int smallerProblem = power(n-1);
    int biggerProblem = 2*smallerProblem;

    return biggerProblem;

    // ------------------- OR for above three lines we can write like this------------------
    
    // return 2*power(n-1);
}

int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;

    cout<<power(n);

    return 0;
}