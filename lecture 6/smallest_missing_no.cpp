#include <iostream>
#include <climits>
using namespace std;
int smallest_missing_no(int arr[], int n)
{

    const int N = 1e6 + 2;

    bool missing[N];

    for (int i = 0; i < N; i++)
    {
        missing[i] == 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            missing[arr[i]] = 1;
        }
    }

    int ans = -1;

    for (int i = 0; i < N; i++)
    {
        if (missing[i] == 0)
        {
            ans = i;
            break;
        }
    }

    cout << "smallest missing number is:" << ans;

    return 0;
}
int main()
{
    int n;
    cout << "enter the size of the array:";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "enter the number:";
        cin >> arr[i];
    }

    smallest_missing_no(arr, n);

    return 0;
}