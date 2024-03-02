// you have given a number of stairs you are at the 0th stair and you need to reach at nth stair .each time you can either
// climb one step or two steps. you are supposed to return the number of distinct ways in which you can climb from the 0th step to nth step

#include<iostream>
using namespace std;

int nthstair(int n)
{
    //base case
    if(n<0)
    {               //there is no ways to go below 0th stair
        return 0;
        
    }
    if(n==0)
    {   //there is only 1 ways to go from   0th stair to 0th stair
        return 1;

    }

// recurrance relation

    return nthstair(n-1) + nthstair(n-2);

}
int main()
{
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    cout<<nthstair(n);

    return 0;
}