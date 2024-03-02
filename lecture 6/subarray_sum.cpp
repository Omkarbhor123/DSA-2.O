#include<iostream>
using namespace std;
int subarray_sum(int arr[],int n,int s)
{

//   time complexity O(n^2)

//    for(int i=0;i<n;i++)
//    {
//        int sum=0;
//        for(int j=i;j<n;j++)
//        {
//            sum=sum+arr[j];
           
//            if(sum==s)
//            {
//               cout<<i+1<<" "<<j+1<<endl;
//            }
//        }
//    }

// ---------------------------- OR ---------------------------------
 
//  time complexity O(n)

    int i=0,j=0,sum=0,start=-1,end=-1;

    while(j<n&&sum+arr[j]<=s)       // first checking s==sum or not by just adding one by one element of the array 
    {
        sum+=arr[j];
        j++;
    }
    if(sum==s)
    {
        cout<<i+1<<" "<<j+1<<endl;
        return 0;
    }

    while(j<n)       
    {
        sum+=arr[j];

        while(sum>s)
        {
            sum-=arr[i];
            i++;

            if(sum==s)
            {
                start=i+1;
                end=j+1;
                break;
            }

            j++;
        }

        cout<<start<<" "<<end<<endl;
    }
}
int main()
{
     int n ,s;
    cout << "enter the size of the array:";
    cin >> n;

    cout << "enter the value of s:";
    cin >> s;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "enter the number:";
        cin >> arr[i];
    }

   subarray_sum(arr,n,s);
    
    return 0;
}