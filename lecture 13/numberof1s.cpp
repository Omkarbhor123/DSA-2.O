#include<iostream>
using namespace std;

int number_of_ones(int n)
{
    int count = 0;
    while(n)
    {
        n = n & (n-1);
        count++;
    }
    return count;
}

int main()
{   cout<<endl;
    cout<<"The number of 1's in the given number binary representation are: "<<number_of_ones(16)<<endl;
    cout<<endl;
    return 0;
}