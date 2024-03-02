
//binary search using recursion

#include<iostream>
using namespace std;

bool binarySearch(int arr[],int s,int e,int key)
{
    if(s>e) //base case
    {
        return false;
    }

    int mid = s + (e-s)/2;

    if(arr[mid]==key)
    {
        return true;
    }

    if(key>arr[mid])
    {
        binarySearch(arr,mid+1,e, key);        
    }
    else{
        binarySearch(arr,s,mid-1, key);       
    }

}
int main()
{
    int n =10;
    int arr[n]={1,3,4,5,6,7,8,9,10,23};
    
   if(binarySearch(arr,0,n-1,23))
    {
        cout<<"Present";
    }
    else{
        cout<<"Absent";
    }
    return 0;
}