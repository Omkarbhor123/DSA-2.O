
/*
Given a number positive number N, find value of f0 + f1 + f2 + . + fN where fi indicates ith Fibonacci number.
Remember that f0 = 0, f1 = 1, f2 = 1, f3 = 2, f4 = 3, f5 = 5,
Since the answer can be very large, answer modulo 1000000007 should be returned.
*/

#include<iostream>
using namespace std;

const int MOD = 1000000007;  // or 1e8+7  

int fibonacciSum(int n)
 {
    if (n <= 0) 
    {
        return 0;
    }
    
    long long a = 0, b = 1, sum = 1; // first element of fibonacci series is 0 , second element of fibonacci series is 1 

    for (int i = 2; i <= n; ++i)
     {
        long long temp = (a + b) % MOD;
        sum = (sum + temp) % MOD;
        a = b;
        b = temp;
    }
    
    return sum;
}

int main() {
    int n;
    cout << "Enter the value of N: ";
    cin >> n;
    cout << "Sum of Fibonacci numbers up to f" << n << " modulo 1000000007: " << fibonacciSum(n) << endl;
    return 0;
}