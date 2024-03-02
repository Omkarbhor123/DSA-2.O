#include <iostream>
using namespace std;

// it requires array in sorted order
// it's time complexity is O(log(n)) ;

int binary_search(int arr[], int n, int key)
{
    int start, end;

    start = 0;
    end = n - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (key == arr[mid])
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
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

    cout << endl;
    cout << "*please enter the number in sorted order *" << endl;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "enter the number:";
        cin >> arr[i];
    }

    cout << "enter the number which you want to search:";
    cin >> key;

    int ans = binary_search(arr, n, key);

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