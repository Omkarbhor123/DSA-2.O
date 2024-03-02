#include <iostream>
#include<algorithm> //if we want to find max from two numbers then we don't have need to include this algorithm header file we can directly use max (a,b) without curley brackets 
using namespace std; // but if we have to find maximum from multiple elements then we need this header file and we have to write the elements in curley brackets for example  max({a,b,c,d})

int main()
{
    int a, b, c,d;

    while (true)
    {
        cout << "enter the number a:";
        cin >> a;

        cout << "enter the number b:";
        cin >> b;

        cout << "enter the number c:";
        cin >> c;


        if (a >= b && a >= c)
        {
            cout << "the maximum number is :" << a << endl;
        }
        else if (b >= a && b >= c)
        {
            cout << "the maximum number is :" << b << endl;
        }
        else
        {
            cout << "the maximum number is :" << c << endl;
        }

        // --------------------------------- USING BUILT-IN FUNCTION ----------------------

        int maximum = max({a, b, c});
        cout <<"the maximum number is :"<< maximum << endl;
    }

    return 0;
}