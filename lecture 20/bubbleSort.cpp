
//bubble sort using recursion
#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n)
{
    if(n==0 ||n==1)
    {
        return ;
    }

    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
             swap(arr[i],arr[i+1]);
        }
       
    }

    bubbleSort(arr,n-1);

} 
int main()
{
    int n=15;
    int arr[15]={3,6,2,7,8,9,9,9,1,0,7,6,5,4,1};

    bubbleSort(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}

/*1. Initial Call (bubbleSort(arr, 5))

The main function calls bubbleSort with the array arr and its size 5.
Base cases (n == 0 or n == 1) are not met, so the function proceeds.
2. First Iteration (Loop 1):

The loop iterates from i = 0 to i = 3 (n-1).
It compares adjacent elements:
(3, 6): No swap needed.
(6, 2): Swaps 6 and 2, resulting in {3, 2, 6, 7, 8}.
(2, 6): No swap needed.
(6, 7): No swap needed.
3. Recursive Call (bubbleSort(arr, 4))

The function calls itself recursively with a smaller array (n = 4).
4. Second Iteration (Loop 2, within bubbleSort(arr, 4))

The loop iterates from i = 0 to i = 2 (n-1 = 4-1).
It compares adjacent elements:
(3, 2): Swaps 3 and 2, resulting in {2, 3, 6, 7, 8}.
(3, 6): No swap needed.
(6, 7): No swap needed.
5. Recursive Backtracking:

This process continues recursively, gradually reducing the array size until n becomes 1.
Each recursive call sorts one more element correctly at the end.
The function calls backtrack, returning to previous calls with partially sorted arrays.
6. Final Sorted Array:

After all recursive calls and backtracking, the array is fully sorted: {2, 3, 6, 7, 8}.
7. Printing in main():

The main function prints the sorted array: 2 3 6 7 8.*/