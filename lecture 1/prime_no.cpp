#include <iostream>
using namespace std;

// Prime numbers :- the prime numbers are the numbers which are divisible by only  1 and itself
// it has only two factors means they are divisible by only 1 and itself
// 0  and 1 are not prime numbers

// Logic:- all numbers are completly divisible by 1 and itself but if the number is divisible by other than this numbers then that is non-prime number
// means if i check the given number is complete divisible or not in range 2 to n-1 and i found that the number is divisible by the number which is in range 2 to n-1 then that is  NOT prime number

// Composite numbers:- composite numbers are the numbers which has more than two factors means they are divisible 1 , itself and also with another numbers
//   and they are called as non-prime numbers

// for example : let check for 6
// 6 is completly divisible by 1 and also by 6
// so i need to check that  6 is complete  divisible with any another  numbers from 2 to 5 if divisible then it is not prime number
// if divisible then it is not prime number and if not divisible then it is prime number

// 6 is divisible with 1,6,2,3, we can see that 6 is divisible with only 1 and itself but it is also divisible with another numbers so it's not a prime number
int main()
{
    // the following program has time complexity is O(n)
    // don't use the following program its time complexity is more

    while (true)
    {
        int n;
        cout << " enter positive integer:";
        cin >> n;

        bool is_prime = true;

        if (n == 0 || n == 1)
        {
            is_prime = false;
        }

        else
        {
            //we know that prime number has always two factors 1 and number itself now let's check if the number has more than 2 factors or not 
            // if yes that is not prime number 

            for (int i = 2; i < n; i++) // condition i<n bez we know that any number is divisible by itself
            {
                if (n % i == 0) //checking the given number is divisible by rather than 1 and itself if yes then that will not prime 
                {
                    is_prime = false;
                }
            }
        }
        if (is_prime)
        {
            cout << n << " is prime number" << endl;
        }
        else
        {
            cout << n << " is not a prime number" << endl;
        }
    }

    // ------------------- program with time complexity O(root n)---------------------

    // let consider 36

    // 2x18=36
    // 18x2=36
    // 4x9=36
    // 9x4=36
    // 3x12=36
    // 12x3=36

    // we can see that if i check 2x18 then again i am checking 18x2
    // so we are doing same thing two times so we will provide the range i< root n

    // further see code with harry

    while (true)
    {
        int n;
        cout << " enter positive integer:";
        cin >> n;

        bool is_prime = true;

        if (n == 0 || n == 1)
        {
            is_prime = false;
        }

        else
        {
            for (int i = 2; i * i <=n; i++) // we have assigned condition as (i< root of n) which is means (i square < n) we can also use sqrt(n) by including cmath header file
            {
                if (n % i == 0)
                {
                    is_prime = false;
                }
            }
        }
        if (is_prime)
        {
            cout << n << " is prime number" << endl;
        }
        else
        {
            cout << n << " is not a prime number" << endl;
        }
    }

    return 0;
}