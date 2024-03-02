#include <iostream>
using namespace std;
int main()
{
    cout << " program to check given number is even or odd\n";

    int n;

    while (true)
    {
        cout << "\nenter the number:";
        cin >> n;
        cout << endl;

        if (n % 2 == 0)
        {
            cout << "the number is even" << endl;
        }
        else
        {
            cout << "the number is odd" << endl;
        }
    }
}