
//use only when n is passed in quickSort function when calling from main() don't use when n-1 is passed

#include<iostream>
using namespace std;

int partition(int arr[],int low ,int high)
{
    int pivot = arr[low];
    int i =low;
    int j =high;

    while(i<j)
    {
        do
        {
            i++;
        } while (arr[i]<=pivot);

        do
        {
            j--;
        } while (arr[j]>pivot);

        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
        
    }
    swap(arr[low],arr[j]);
    return j;
}

void quickSort(int arr[],int low,int high)
{
    if(low<high)
    {
        int p = partition(arr,low,high);
        quickSort(arr,low,p);
        quickSort(arr,p+1,high);
    }
}
int main()
{
    int arr[]= {3,5,3,5,7,1,0,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    quickSort(arr,0,n); // high is n not n-1 

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}