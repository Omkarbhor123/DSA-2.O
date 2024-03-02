#include<iostream>
using namespace std;
void record_break_days(int arr[],int n)
{  
    // basically here we have to check that the current element of array  is greater than all previous element of arrray or not and it should be 
    // greater than its just next element or not .if  yes then that is record break day 
    
  
    int ans=0;
    int maxi=-1;

    for(int i=0;i<n;i++)
    {
        if( arr[i]>maxi && arr[i]>arr[i+1])
        {
            ans++;
            maxi=arr[i];
        }

        //  maxi= max(maxi,arr[i]);
    }

    cout<<ans<<endl;

    
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

    record_break_days(arr, n);

    return 0;
}