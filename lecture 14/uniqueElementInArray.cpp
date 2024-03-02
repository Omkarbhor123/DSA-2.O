#include<iostream>
using namespace std;

int unique(int arr[],int n)
{
    int Xorsum = 0;
    for(int i=0;i<n;i++)
    {
        Xorsum = Xorsum^arr[i];
    }
    return Xorsum;
}
int main()
{
    int arr[] = {1,2,3,4,1,2,3,4,5,5,7};
    cout<<unique(arr,11);

    return 0;
}