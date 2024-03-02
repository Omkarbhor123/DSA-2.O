#include <iostream>
#include <climits>
using namespace std;

int kadanes_algo(int arr[], int n)
{
    int current_sum = 0;
    int max_sum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        current_sum = current_sum + arr[i];

        if (current_sum < 0)
        {
            current_sum = 0;
        }

        max_sum = max(max_sum, current_sum);
    }

    return max_sum;
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

    int wrapping;
    int nonwrapping;

    nonwrapping = kadanes_algo(arr, n); // normal case no need to move from last element to first element of the array again

    int total_sum_of_array_elements = 0;

    for (int i = 0; i < n; i++)
    {
        total_sum_of_array_elements = total_sum_of_array_elements + arr[i]; // calculating total sum of all array elements
        arr[i] = -arr[i];                                                   // reversing the sign of the array elements
    }

    wrapping = total_sum_of_array_elements + kadanes_algo(arr, n); // kadanes_algo will return the sum of non_contributing elements whose sign we are changed
    // our actual formula was [ max_sum = total_sum_of_array_elements - total sum of non_contributing elements] but we are changing the sign of the total sum of the non
    //    contributing elements so the formula becomes [max_sum = total_sum_of_array_elements - (- total sum of non_contributing elements) ] = nonwrapping=total_sum_of_array_elements + kadanes_algo(arr,n);

    int max_sum = max(wrapping, nonwrapping);

    cout << "the maximum circular subarray sum is:" << max_sum << endl;
    return 0;
}