#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the number to check even or odd:";
    cin >> n;

    int ans;
    ans = n / 2;
    
    if (ans * 2 == n)
    {
        cout << "The given number is Even" << endl;
    }
    else
    {
        cout << "Given number is Odd !!!" << endl;
    }
    return 0;
}