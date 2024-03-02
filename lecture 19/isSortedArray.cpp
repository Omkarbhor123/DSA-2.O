
//check whether the array is sorted or not 

#include<iostream>
using namespace std;

bool isSorted(int arr[],int n)
{
    if(n==0||n==1) //base case
    {
        return true;
    }
    if(arr[0]>arr[1]) 
    {
        return false;
    }
    int remainingPart = isSorted(arr+1,n-1); //for remaining part

    return remainingPart;
}

int main()
{
    int arr[9]={0,2,3,4,5,6,9,9,9};

    if(isSorted(arr,9))
    {
        cout<<"array is sorted.";

    }
    else{
        cout<<"NOT Sorted";
    }

    return 0;
}

//------------------------------- WORKING --------------------------------------

/*Suppose we have an array arr with elements {0, 2, 3, 4, 5, 6, 9, 9, 9} and we call isSorted(arr, 9) from the main function.

Initial Call (isSorted(arr, 9)):

arr = {0, 2, 3, 4, 5, 6, 9, 9, 9}
n = 9
Base conditions are not met, so it proceeds to check if the first element is greater than the second:
arr[0] = 0
arr[1] = 2
Since arr[0] is not greater than arr[1], it proceeds to the next step.
Recursive Call 1 (isSorted(arr + 1, 8)):

It makes a recursive call with the pointer shifted to the next element of the array (arr + 1) and the size reduced by 1 (n - 1).
Now, the array becomes {2, 3, 4, 5, 6, 9, 9, 9} and n becomes 8.
Recursive Call 2 (isSorted(arr + 1, 7)):

It repeats the same process for the smaller array {2, 3, 4, 5, 6, 9, 9, 9}.
This process continues until the base case is reached.
Base Case (Recursive Call 9 (isSorted(arr + 1, 1))):

The base case is reached when n becomes 1 (the size of the array is 1).
At this point, the function returns true, as an array of size 1 is considered sorted.
Backtracking:

As the recursive calls return, the function checks if each smaller part is sorted.
If any part is not sorted, it returns false.
If all parts are sorted, it returns true.
Result Printed:

In the main function, the result of the isSorted function is printed using cout..*/