//Quick sort using recursion
// time complexity 
// best case O(nlogn)
// avg case O(nlogn)
// worst case O(n^2)
// space complexity = O(n);

#include<iostream>
using namespace std;

int partition(int arr[], int low, int high)
{
        int pivot = arr[low]; //choosing pivot as first element of the array
        int i = low;
        int j = high;

        while (i < j) // when i and j cross each other means when this while loop condition is false then j is pointing to the current position of the pivot or partition index
        {
            while (i <= high && arr[i] <= pivot)  // incriment i till arr[i] is not greater than pivot
            {
                i++;
            }
            
            while (j >= low && arr[j] > pivot)// decriment j till arr[j] is not smaller than pivot
            {
                j--;
            }

            if (i < j)            // swap arr[i],arr[j] . if i>j it means that partitioning is already completed
            {
                swap(arr[i], arr[j]);
            }
        }

        swap(arr[low], arr[j]); // we got the correct partition position or pivot position so placing the pivot at it's correct position as j is pointing pivot correct position
        
        return j;  // returning partitioning index
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int p = partition(arr, low, high);
        quickSort(arr, low, p - 1);  
        quickSort(arr, p + 1, high); 
    }
}

int main()
{
    
    int arr[] = {2,4,2,6,8,9,1,2,5,8,0,3,0,0,3,7,5} ;
    int n = sizeof(arr)/sizeof(arr[0]);
    
    quickSort(arr,0,n-1); // high is n-1

    for(int i =0 ;i<n ;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
