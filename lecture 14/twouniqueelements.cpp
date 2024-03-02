// Q)  
#include<iostream>
using namespace std;

int setBit(int n , int pos)
{
    if(( n & (1<<pos)) != 0)
    {
        return 1;
    }
}

void unique (int arr[],int n)
{
    int Xorsum = 0;
    for(int i=0 ;i<n;i++)
    {
        Xorsum = Xorsum^arr[i];
    }

    int tempxor = Xorsum;
    int setbit = 0;
    int pos = 0;

    while(setbit!=1)
    {
        setbit = Xorsum & 1;
        pos++;
        Xorsum = Xorsum >> 1;
    }

    int newxor = 0;
    for(int i = 0 ; i<n; i++)
    {
        if(setBit(arr[i],pos-1))
        {
            newxor = newxor^arr[i];
        }
    }

    cout<<newxor<<endl;
    cout<<(tempxor^newxor)<<endl;

}

int main()
{
    int arr[]={1,2,3,1,2,3,5,7,5,7,9,10};
    unique(arr,12);
    
    return 0;
}