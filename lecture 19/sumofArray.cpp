//find the sum of array

#include<iostream>
using namespace std;

int Arraysum(int arr[],int n)
{
    //base condition
    if(n==0 )
    {
        return 0;
    }

    if(n==1) 
    {
        return arr[0];
    }
    
    int remainingPart =Arraysum(arr+1,n-1);
    int sum = arr[0] + remainingPart;
    return sum;
}
int main()
{
 int arr[5]={0,2,3,4,5};
 cout<<Arraysum( arr,5);   
    return 0;
} 

/*1. Initial Call (Arraysum(arr, 5):

arr stores the array {0, 2, 3, 4, 5} and n is 5.
Base conditions (n == 0 or n == 1) are not met.
remainingPart is assigned the result of the recursive call Arraysum(arr + 1, 4).
2. Recursive Call 1 (Arraysum(arr + 1, 4):

Array becomes {2, 3, 4, 5} and n becomes 4.
Base conditions are not met.
remainingPart is assigned the result of the recursive call Arraysum(arr + 1, 3).
3. Recursive Call 2 (Arraysum(arr + 1, 3):

Array becomes {3, 4, 5} and n becomes 3.
Base conditions are not met.
remainingPart is assigned the result of the recursive call Arraysum(arr + 1, 2).
4. Recursive Call 3 (Arraysum(arr + 1, 2):

Array becomes {4, 5} and n becomes 2.
Base conditions are not met.
remainingPart is assigned the result of the recursive call Arraysum(arr + 1, 1).
5. Recursive Call 4 (Arraysum(arr + 1, 1):

Array becomes {5} and n becomes 1.
Base condition n == 1 is met.
The function directly returns arr[0], which is 5.
6. Backtracking from Recursive Call 4:

We move back to the previous call Arraysum(arr + 1, 2).
remainingPart now holds the value returned from the previous call, which is 5.
The sum is calculated as arr[0] + remainingPart = 4 + 5 = 9.
The function returns 9.
7. Backtracking from Recursive Call 3:

We move back to the previous call Arraysum(arr + 1, 3).
remainingPart now holds the value returned from the previous call, which is 9.
The sum is calculated as arr[0] + remainingPart = 3 + 9 = 12.
The function returns 12.
8. Backtracking from Recursive Call 2:

We move back to the previous call Arraysum(arr + 1, 4).
remainingPart now holds the value returned from the previous call, which is 12.
The sum is calculated as arr[0] + remainingPart = 2 + 12 = 14.
The function returns 14.
9. Backtracking from Recursive Call 1:

We move back to the initial call Arraysum(arr, 5).
remainingPart now holds the value returned from the previous call, which is 14.
The sum is calculated as arr[0] + remainingPart = 0 + 14 = 14.
The function returns 14.
10. Final Result:

The main function receives the final sum of 14 and prints it as the result.
*/
