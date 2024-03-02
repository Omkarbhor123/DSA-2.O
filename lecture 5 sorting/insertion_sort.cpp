#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n)
{   
    //initially we assume that first element of the array is always sorted so we will start iterating from i=1

    for(int i=1;i<n;i++)
    {
        int current = arr[i];
        int j= i-1;

        while(arr[j]>current && j>=0)
        {
            arr[j+1]=arr[j];                // if the current or  (arr[i]) is less than the arr[j] or (arr[i-1]) then move arr[j] by one position towards right (arr[j+1])
             j--;
        }

        arr[j+1]=current;              // after shifting is done insert the current element at its right position or at empty slot 
    }

    cout << "sorted array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
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

    insertion_sort(arr, n);
    return 0;
}