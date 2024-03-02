
//  easy code 
// time complexity : nlog n
// used in linklist to insert element at middle with O(1) space and time complexity

#include<iostream>
using namespace std;

void merge(int arr[], int start, int mid, int end) //the function  arr[] is contains two sorted arrays which is passed by the function call so 
{ // to sort both array we have to create two arrays 

 for (int i = start; i <=end; i++)
    { 
        cout << arr[i] << " ";
    }
cout<<endl;
    int leftSize = mid - start + 1;  // first sorted arrray size in the arr[]
    int rightSize = end - mid; // second sorted array size in the arr[]

// making two temperory array two store the two array which is sorted in arr[]

    int left[leftSize];     // to store left sorted array 
    int right[rightSize]; //to store right sorted array

    for (int i = 0; i < leftSize; i++) //storing left array in temp array (left)
    {
        left[i] = arr[start + i];
    }
    for (int i = 0; i < rightSize; i++) ////storing right array in temp array (right)
     { 
          right[i] = arr[mid + 1 + i];
     }

//merging both left and right array so that overall array will be sorted

    int i = 0; // pointing i at zeroth position of temporary array (left)
    int j = 0; //pointing j at zeroth position of temporary array (right )
    int k = start;  // 

    while (i < leftSize && j < rightSize)  
    {
        if (left[i] <= right[j]) //comparing elements of both array left and right if left[i]<=right[j] then put left[i+1] in arr[k+1]  
         {
               arr[k++] = left[i++]; // here first this will happen  arr[k]= left[i] then k and i will get incremented 
         }
        else
        {
            arr[k++] = right[j++]; // here first this will happen  arr[k]= left[i] then k and i will get incremented 

            // we can write above things like this
            //  arr[k] = right[j];
            //  k++;
            //  j++;
        }
    }
 
    while (i < leftSize) // handling when j in right[] is reached at end but i in left[] not reached at end 
    { 
         arr[k++] = left[i++]; // put all remaining  elements of left in arr[]  
    }
    while (j < rightSize) // handling when i in left[] is reached at end but j in right[] not reached at end 
     {   
        arr[k++] = right[j++]; //put all remaining elements of right[] in arr[]
     }
}

void mergeSort(int arr[], int start, int end) {
    if (start >= end) // base condition 
     {  
         return;
     }
    int mid = start + (end - start) / 2; // we can also use (start + end )/2  If we use (start + end )/2 then it may happen that the sum will exceed the limit of integer hence we should use start + (end-start)/2

    mergeSort(arr, start, mid); // dividing left array till only one element is not remain
    mergeSort(arr, mid + 1, end); // dividing right array till only one element is not remain

    merge(arr, start, mid, end); // merging both left and right array 
}

int main() {
    int arr[] = {2, 5, 1, 6, 9, 6, 9, 4, 7, 2};
    int n = sizeof(arr) / sizeof(arr[0]); //for ex here : 40/4=10

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    { 
        cout << arr[i] << " ";
    }
    
    return 0;
}
