#include<iostream>
using namespace std;

void subset(int n , int arr[])
{
    // every set has one empty subset and we know that if there are n numbers then total number of subsets are 2^n so loop will go from 0  to 2^n-1
    for(int i=0;i<(1<<n);i++) // 2^n  we can write using left shift operator as (1<<n) it will shift the bits of integer 1 by postion n binary representation of 1 is 0001 let n=3 so after left shift of 3 it will be 1000 = 8 =2^3 
    {
        //inner loop iterates through each bit position of the binary representation of i.

        for(int j=0;j<n;j++) // our subsets will contain max n elements so loop is from 0 to n-1
        {
            if(i & (1<<j))  // get bit process is applied if (i & 1<<j) is true then if condition will execute. 1<<j means 2^j
            {
                cout<<arr[j]<<" "; //This condition checks if the jth bit of the binary representation of i is set to 1.
                                    // (1 << j) creates a binary number with only the jth bit set to 1 (bitwise left shift).
                                    // i & (1 << j) checks if the corresponding bit in i is set.
                                    // If the jth bit is set, it means the corresponding element from the array should be included in the current subset. So, it prints the element arr[j].
            }

        }
        cout<<endl;
    }
}
int main()
{
    int arr[4] = {1,2,3,4};
    subset(4,arr);
    return 0;
}