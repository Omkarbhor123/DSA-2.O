
// find a^b

#include<iostream>
using namespace std;

int power(int a,int b)
{
    if(b==0)
    {
        return 1;
    }
    if(b==1)
    {
        return a;
    }

    int ans = power(a,b/2);

    if(b%2==0)
    {
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
}
int main()
{
    int a,b;
    a=5;
    b=4;
   cout<<power(a,b);
    
    return 0;
}

// ---------------------------------execution------------------------------------
/*1. Initial Call (power(5, 4))

The program defines a as 5 and b as 4.
power(5, 4) is called from the main function.
Base cases:
Since b is not 0, this condition if(b==0) is not fulfilled.
Similarly, since b is not 1, this condition if(b==1) is also not fulfilled.
2. Recursive Call 1 (power(5, 2))

The function calculates b/2, which is 4/2 = 2.
The function performs a recursive call power(5, 2).
Base cases:
Since b is not 0, this condition if(b==0) is not fulfilled.
Similarly, since b is not 1, this condition if(b==1) is also not fulfilled.
3. Recursive Call 2 (power(5, 1))

The function calculates b/2, which is 2/2 = 1.
The function performs a recursive call power(5, 1).
Base case:
b is now 1, which satisfies the condition if(b==1).
This triggers the base case, and the function directly returns a, which is 5.
4. Backtracking: Returning from power(5, 1)

The value 5 is returned to the previous recursive call (power(5, 2)) as the result of power(5, 1).
5. Calculation in power(5, 2)

Since b is even (2), the function uses the calculation ans*ans where ans is the previously returned value (5).
Therefore, power(5, 2) calculates and returns 5 * 5 = 25 to the calling function.
6. Backtracking: Returning from power(5, 2)

The value 25 is returned to the initial call (power(5, 4)) as the result of power(5, 2).
7. Calculation in power(5, 4)

Since b is still even (4), the function uses the calculation ans*ans where ans is the previously returned value (25).
Therefore, power(5, 4) calculates and returns 25 * 25 = 625 to the main function.
8. Final Result and Output:

The main function receives the final result 625 from power(5, 4).
This result is printed as the answer, representing 5 raised to the power of 4.*/