#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    // -------------------- Sort()------------------
    
    // sort algorithm takes two arguments first argument is a position from where we want 
    // to start sorting and second argument is position + 1  upto which we have to perform sorting
   //  ------------------ VIMP ----------------
   // this sorting algorithim is called as Intro Sort it is combination of three sorting algorithms  1) quick sort 2) heap sort 3) Insertion Sort ). It is best sorting algorithm 
   /// It by default pritn the values in the ascending order if we want to print in descending order then we have the pass third argument as comparater there are inbuilt comparaters which can be used or we can also define our own comparater functions
    sort(arr,arr+n);  //we know that arr is nothing but an address of first position of the array  and arr+n means (last + 1) position of array
    
    // ---- For Vector ----

    vector<int>v(n) ;
    sort(v.begin(),v.end());

    sort(v.begin()+2,v.end());

    // -------- printing vector in descending order ----------

    sort(v.begin(),v.end(),greater<int>());
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    









    return 0;
}