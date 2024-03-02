#include <iostream>
using namespace std;

int main()
{
    int n;

    while (true)
    {
        cout << "enter the positive number:";
        cin >> n;

        int temp=n;

        long long fact = 1;

        while (n > 0)
        {
            fact = fact * n;
            n--;
        }

        cout<<"The factorial of " <<temp<<" is:"<<fact<<endl;
    }
    return 0;
}