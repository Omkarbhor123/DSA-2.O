#include <iostream>
using namespace std;
void bubble_sort(int arr[], int n)
{ 
    //repeatedly swap two adjacent elements if they are in wrong order ;


    int count = 1;

    while (count < n)
    {
        for (int i = 0; i < n - count; i++)
        {
            if (arr[i] > arr[i + 1])
            {   
                // swap(arr[i],arr[i+1]);
                
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }

        count++;
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

    bubble_sort(arr, n);
    return 0;
}