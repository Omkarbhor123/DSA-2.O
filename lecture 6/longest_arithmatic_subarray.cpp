#include <iostream>
using namespace std;

void longest_arithmathic_subarray_length(int arr[], int n)
{

    int ans = 2;              // assigning answer ans=2 bez we know that arithmatic array contains at least two elements with equal consecuitive difference between two elements so longest length with contiguous arithmatic subarray is 2
    int pd = arr[1] - arr[0]; // assigning difference (array 1st element - array 0th element) to previous difference(pd)
    int currentLength = 2;    //
    int i = 2;                // iterating from the third element of the array (arr[2]) bez we alredy done with difference between first two elements as we assigned that difference to pd .

    while (i < n)
    {
        if (pd == arr[i] - arr[i - 1])
        {
            currentLength++;
        }
        else
        {
            pd = arr[i] - arr[i - 1];
            currentLength = 2;
        }

        ans = max(ans, currentLength);
        i++;
    }

    cout << ans << endl;
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

    longest_arithmathic_subarray_length(arr, n);
    return 0;
}