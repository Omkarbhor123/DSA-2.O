
// find the factorial of n 
// //loveBubber lecture

#include<iostream>
using namespace std;

int factorial(int n)
{
    //base case
    if(n==0)
    {
        return 1; // 0! =1 
    }

//recurance relation

    int smallerProblem = factorial(n-1);
    int biggerProblem = n*smallerProblem;

    return biggerProblem;

    /*In short we can write it in single line like this

    return n*factorial(n-1);
    
    */

}
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;

    cout<<factorial(n);

    return 0;
}