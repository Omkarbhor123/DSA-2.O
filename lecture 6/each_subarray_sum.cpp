#include<iostream>
using namespace std;
void subarray_sum(int arr[],int n)
{
   

    for (int i=0;i<n;i++)
    {
       int  sum=0;

        for(int j=i;j<n;j++)
        {
            sum=sum+arr[j];
            cout<<sum<<endl;
        }
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

    subarray_sum(arr, n);
    return 0;
}