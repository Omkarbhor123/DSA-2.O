#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int n, key;
    cout << "enter the size of the array:";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter the number:";
        cin >> arr[i];
    }
    cout << "enter the number which you want to search:";
    cin >> key;

    int ans = linear_search(arr, n, key);

    if (ans == -1)
    {
        cout << "number is not found !!!" << endl;
    }
    else
    {
        cout << "The number is present at index :"
             << " " << ans << endl;
    }
    return 0;
}