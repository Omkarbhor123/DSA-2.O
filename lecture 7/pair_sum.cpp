#include<iostream>
#include<algorithm> // used to sort array  
using namespace std;
bool pair_sum(int arr[],int n,int s)
{   
    // ----------------------- WITH O(n^2) TIME COMPLEXITY ------------------------------

    /* 
    
    for(int i=0;i<n-1;i++)
    {
        for(int j= i+1;j<n;j++)
        {
            if((arr[i]+arr[j])==s)
            {
                cout<<i+1<<" "<<j+1<<endl;
                return true;
            }
        }
    }

    */

//------------------------- WITH O(n) TIME COMPLEXITY ----------------------------------

// NOTE :- this approch works only when array is sorted if array is not sorted the sort that first 

sort(arr,arr+n);

int low = 0;                 //here we are using two pointers basically one is from starting of the array and one is from the end of the array 
int high = n-1;

while(low<high)
{
    if(arr[low]+arr[high]==s)        // here we will check the sum of arr[low] + arr[high] if it is equal to given sum then we got the solution return no need to execute further things
    {
        cout<<low+1<<" "<<high+1<<endl; // +1 is to print the position of array element which giving the sum s  .  not printing according to array indexing .

        return true;
    }
    else if(arr[low]+arr[high]>s) // but when sum is greater than given sum then we will decriment the high pointer as array is in sorted order when we decriment high 
    {                               // then obusouly we will get less sum then in next iteration it will check sum == s or not if yes then we have got the solution
        high--;
    }
    else
    {                               // when sum is less than the given sum (s) then we will incriment low as array is in sorted order when we incriment low we will get high value 
        low++;
    }


}




return false;

}
int main()
{
     int n,s;
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

    bool flag = pair_sum(arr,n,s);

if(flag==1)
{
    cout<<"pair of element is present which match the value s"<<endl;
}
else{
    cout<<"pair of element is NOT present which match the value s"<<endl;
}

cout<<endl;
    return 0;
}