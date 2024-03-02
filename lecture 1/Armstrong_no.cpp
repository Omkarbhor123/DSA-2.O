#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Armstrong number : if we cube the each digit of the armstrong number and add all them then you will get the same number
    // for Example: 153
    // 1^3 =1, 5^3= 125 ,3^3=27
    // 1+125+27 = 153

    while (true)
    {

        int n;
        cout << "\nenter the number:";
        cin >> n;
        cout << endl;

        int original_n = n;
        int sum = 0;

        while (n > 0)
        {
            int lastdigit = n % 10;  //it will give the last digit or 1th position digit (ex:here 3) of the given number in first iteration in the 2nd iteration it will give 10th position digit (ex:here 5) then 100th position (ex: here 1) and so on it will continue till number not get end 

            // sum += pow(lastdigit, 3); // the power function is used to calculate the power of the number we givn number in
            //  bracket as lastdigit and power as 3 bez we have to calculate the cube we have to include cmath header file first
  
            //  ----------------------------or-----------------------------------------------------------

            sum = sum + (lastdigit * lastdigit * lastdigit);

            n = n / 10;   // it will give the quotient after division but only integer part
        }

        if (sum == original_n)
        {
            cout << "The given number is armstrong number" << endl;
        }
        else
        {
            cout << "Not a armstrong no." << endl;
        }
    }

    return 0;
}