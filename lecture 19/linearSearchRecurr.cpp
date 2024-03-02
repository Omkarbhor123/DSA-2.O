
// perform linear search using recursion

#include<iostream>
using namespace std;

bool ispresent(int arr[],int n,int key)
{
    if(n==0)
    {
        return 0;
    }
    if(arr[0]==key)
    {
        return 1;
    }
    else{
 return ispresent(arr+1,n-1,key);
    }
   
}
int main()
{
    int arr[5] ={1,4,3,5,6};
    int key = 0;
    if(ispresent(arr,5,key)){
        cout<<key<<" key is present ";
    }
    else{
        cout<<"NOT present";
    }
    return 0;
}

//---------------------WORKING----------------------------

/* Suppose we have an array arr with elements {0, 2, 3, 4} and we call Arraysum(arr, 4) from the main function.

Initial Call (Arraysum(arr, 4)):

arr = {0, 2, 3, 4}
n = 4
Base conditions are not met, so it makes a recursive call:
Arraysum(arr + 1, 3)
Recursive Call 1 (Arraysum(arr + 1, 3)):

arr = {2, 3, 4} (pointer points to the second element of the original array)
n = 3
Base conditions are not met, so it makes another recursive call:
Arraysum(arr + 1, 2)
Recursive Call 2 (Arraysum(arr + 1, 2)):

arr = {3, 4} (pointer points to the third element of the original array)
n = 2
Base conditions are not met, so it makes another recursive call:
Arraysum(arr + 1, 1)
Recursive Call 3 (Arraysum(arr + 1, 1)):

arr = {4} (pointer points to the last element of the original array)
n = 1
Base condition n == 1 is met, so it returns arr[0]:
Return value: 4
Backtracking:

Now, let's backtrack to the previous call (Arraysum(arr + 1, 2)).
remainingPart now holds the return value of the last call, which is 4.
arr[0] holds the value 3.
Calculate the sum: sum = 3 + 4 = 7
Return sum: 7
Backtracking:

Now, let's backtrack to the previous call (Arraysum(arr + 1, 3)).
remainingPart now holds the return value of the last call, which is 7.
arr[0] holds the value 2.
Calculate the sum: sum = 2 + 7 = 9
Return sum: 9
Backtracking:

Now, let's backtrack to the initial call (Arraysum(arr, 4)).
remainingPart now holds the return value of the last call, which is 9.
arr[0] holds the value 0.
Calculate the sum: sum = 0 + 9 = 9
Return sum: 9
Result Printed:

Finally, in the main function, cout prints the returned value 9. */