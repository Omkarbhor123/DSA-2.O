#include<iostream>
using namespace std;

// normally


void power_of_2(int n)
{   
   
    while(n%2==0)
    {
         n = n/2;

    }

    if(n==1)
    {
        cout<<"the number is power of 2";
    }
    else
    {
        cout<<"number is not power of 2";
    }
}

// -----------------------------oR-------------------

// using bit manipulation
// If n is not 0 (i.e., n is a non-zero integer).
// If (n & (n-1)) evaluates to 0 (i.e., n has only one bit set to 1).
// Then, the function returns true, indicating that n is a power of 2; otherwise, it returns false.

// Example 

/*
Binary Representation of 16:

Binary: 10000
(n & (n - 1)) Operation:

n & (n - 1) evaluates to 16 & (16 - 1), which is equivalent to 16 & 15.
Binary representation of 15: 01111
Binary AND operation: 10000 & 01111 results in 00000 (0 in decimal).
Since the result is 0, it means there is only one bit set to 1 in the binary representation of 16.
Logical NOT (!) Operation:

!(n & (n - 1)) is !0, which evaluates to true.
Final Evaluation:

n && !(n & (n - 1)) is 16 && true, which evaluates to true.
Output:

The output is "16 is a power of 2."
*/
bool ispowerof2(int n)
{
    return(n && !(n & n-1));
}

// ------------------------ OR  in detail above code --------------------

void is_powerof2(int n)
{
    // Step 1: Check if n is not 0

    if (n == 0) {
        cout<<"not power of 2";
        return;
    }

    // Step 2: Check if there is only one bit set means(1) in the binary representation of n

    if ((n & (n - 1))==0)
    {
        cout<<"number is power of 2";
    }
     else 
    {
        cout<<"number is not power of 2";
    }
}

int main()
{
    // cout<<ispowerof2(8);
    // is_powerof2(20);
    power_of_2(20);
    return 0;
}