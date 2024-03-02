#include <iostream>
#include <climits>
using namespace std;
void sub_array_sum(int arr[], int n)
{
    // with time complexity O(n^3)

    int maxsum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;

            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }

            maxsum = max(maxsum, sum);
        }
    }

    cout << "the subarray maximum sum is :" << maxsum << endl;

    // ------------------------------- with time complexity O(n^2) ------------------------------

    int max_sum = INT_MIN;

    int cumulative[n] = {0};

    cumulative[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        cumulative[i] = cumulative[i - 1] + arr[i];
    }

    for (int i = 0; i < n; i++)
    {
     
        for (int j = i; j < n; j++)
        {   
            int current_sum = 0;
           
            if (i > 0)
            {
                current_sum = cumulative[j] - cumulative[i - 1];
            }
            else
            {

                current_sum = cumulative[j];

            }

            max_sum=max(max_sum,current_sum);
        }

      
    }

    cout<<"the subarray maximum sum is:"<<max_sum<<endl;

     // ------------------------------- with time complexity O(n^2)  but by creating cumulative array of size (n+1) ------------------------------


        int cummulative_sum[n+1]; //at 0th position we will store 0 so that size is n+1
        cummulative_sum[0]=0;

        for(int i=1;i<=n;i++)
        {
            cummulative_sum[i]=cummulative_sum[i-1]+arr[i-1]; //we have cretated cumulative array of size n+1 but our arr has size n due to that we need to give i-1 (for example arr[i-1])
        }

        int maxi_sum=INT_MIN;

        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<i;j++)
            {   
                int sum=0;
                sum=cummulative_sum[i]-cummulative_sum[j];
                maxi_sum=max(maxi_sum,sum);
            }
        }
     
     cout<<"the subarray maximum sum is:"<<maxi_sum<<endl;



    // ------------------------------- we can also do it with time complexity O(n)  USING KADANE'S ALGORITHM (कडानेस ) ------------------------------
       
    // see in the next file 

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