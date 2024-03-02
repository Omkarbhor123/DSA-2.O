#include<iostream>
#include<climits>
using namespace std;
void sub_array_sum(int arr[], int n)
{
    // we know that if we will add maximum positive contiguous numbers then we will get maximum sum but when we add -ve contiguous numbers then we will not get max sum
    // so in kadanes algo we create one variable by initializing it with zero (ex. current_sum =0 ) rather than creating cummulative array
    // if current_sum + arr[i] == -ve then we will make current_sum = 0 bez this will not give max sum; 
    // then we will make one max_sum variable we will check the maximum from current_sum and max_sum variable maximum value we will assign to max_sum
    // which is our answer

    // --------------------------- TIME COMPLEXITY IS O(n)------------------------
   
    int current_sum = 0;
    int max_sum=INT_MIN;

    for(int i=0;i<n;i++)
    {
        current_sum=current_sum+arr[i];

        if(current_sum<0)
        {
            current_sum=0;
        }

        max_sum=max(max_sum,current_sum);
    }

    cout<<"the maximum sum of subarray is:"<<max_sum<<endl;

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

    sub_array_sum(arr, n);
    return 0;
}