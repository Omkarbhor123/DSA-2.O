#include<iostream>
#include<climits>
using namespace std;

void max_in_subarray(int arr[],int n)
{
    int maxi= INT_MIN; 

    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,arr[i]);
        cout<<maxi<<" ";
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

    max_in_subarray(arr, n);
    return 0;
}