#include <iostream>
using namespace std;

int main()
{
    while (true)
    {

        int n;
        cout << "\nenter a number:";
        cin >> n;

        //   if we divide any number with 10 (divisor) then reminder is always the last digit of the divident or the
        // last digit of the number to which we are dividing

        int reversed_no = 0;

        while (n > 0)
        {
            int lastdigit = n % 10;
            reversed_no = reversed_no * 10 + lastdigit;
            n = n / 10; // after division only integer value of the question will get stored in n
        }

        cout << "the reversed number is :" << reversed_no << endl;
    }

    return 0;
}