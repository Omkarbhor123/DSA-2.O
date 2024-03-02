//merge sort using recursion  
// Time complexity = nlog(n)
// used in linklist to insert element at middle with O(1) space and time complexity
//bubber lect

#include<iostream>
using namespace std;

int merge(int *arr,int s,int e)
{
    int mid =(s+e)/2;

    int len1 = mid-s+1;
    int len2 = e-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int mainArrayIndex=s;

    for(int i = 0 ;i<len1;i++ )
    {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid+1;

     for(int i = 0 ;i<len2;i++ )
    {
        second[i] = arr[mainArrayIndex++];
    }

    //merge 2 sorted arrays

    int index1 = 0;
    int index2 = 0;

    mainArrayIndex = s;

    while(index1 < len1 && index2<len2)
    {
        if(first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = second[index2++];
 
        }
    }

    while(index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }

     while(index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }


}
void mergeSort(int *arr,int s ,int e)
{
    if(s>=e) // baase case
    {
        return;
    }

    int mid = (s+e)/2; //finding mid

    mergeSort(arr,s,mid); //sorting left part 

    mergeSort(arr,mid+1,e); // sorting right part

    //merge
    merge(arr,s,e);
}
int main()
{
    int arr[10] = {2,5,1,6,9,6,9,4,7,2};
    int n = 10;
    mergeSort(arr,0 ,n-1);

    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}

// --------------------------------------- EXECUTION --------------------------------------
/*1. Initial Call: mergeSort(arr, 0, 9)

arr = {2, 5, 1, 6, 9, 6, 9, 4, 7, 2}
Base case (0 >= 9) not met.
Calculate mid-point: (0 + 9) / 2 = 4.
2. First Recursive Call: mergeSort(arr, 0, 4)

Base case (0 >= 4) not met.
Calculate mid-point: (0 + 4) / 2 = 2.
3. Second Recursive Call: mergeSort(arr, 0, 2)

Base case (0 >= 2) not met.
Calculate mid-point: (0 + 2) / 2 = 1.
4. Third Recursive Call: mergeSort(arr, 0, 1)

Base case (0 <= 1) met.
Reaches smallest subarray, no further division needed.
Compare arr[0] (2) and arr[1] (5): 2 < 5, so swap elements.
New smallest subarray: {1, 2}.
Return without further sorting (already smallest).
5. Backtracking from Third Recursive Call:

Control returns to mergeSort(arr, 0, 2).
Now consider subarray arr[0, 2]: {1, 2}.
No further calls or swaps needed since already sorted.
Return control to mergeSort(arr, 0, 4).
6. Backtracking from Second Recursive Call (continued):

Now consider subarray arr[0, 4]: {1, 2, 5, 6}.
Recursively call mergeSort(arr, 3, 4) for the right half ({6, 9}).
7. Fourth Recursive Call: mergeSort(arr, 3, 4)

Base case (3 <= 4) met.
Reaches smallest subarray, no further division needed.
Compare arr[3] (6) and arr[4] (9): 6 < 9, so swap elements.
New smallest subarray: {6, 9}.
Return without further sorting (already smallest).
8. Backtracking from Fourth Recursive Call:

Control returns to mergeSort(arr, 3, 4).
Subarray arr[3, 4] is now {6, 9}.
No further calls or swaps needed since already sorted.
Return control to mergeSort(arr, 0, 4).
9. Backtracking from Second Recursive Call (continued):

Now consider the complete subarray arr[0, 4]: {1, 2, 5, 6, 9}.
Merging left ({1, 2}) and right ({6, 9}) halves using the merge function.
Compare elements one-by-one, placing the smaller one in arr (original array).
The process results in a sorted subarray arr[0, 4]: {1, 2, 5, 6, 9}.
Return control to mergeSort(arr, 0, 9).
10. Backtracking from First Recursive Call (continued):

Similar to steps 2-9, recursively sort and merge the right half arr[5, 9]: {2, 4, 6, 9, 7}.
This involves further recursive calls and merging until the entire arr is sorted.
11. Main Function (continued):

After mergeSort finishes, the main function prints the final sorted array: {1, 2, 2, 4, 5, 6, 6, 7, 9, 9}.*/