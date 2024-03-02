// Q) find the all prime numbers upto n

#include<iostream>
using namespace std;

void sievePrime(int n)
{
    int arr[100]={0};

    
    for(int i = 2 ;i<=n ;i++)
    {
        if(arr[i]==0)
        {
            for(int j=i*i ;j<=n ;j=j+i)
            {
                arr[j]=1;
            }
        }
    }

    for(int i =2 ;i<=n;i++)
    {
        if(arr[i]==0)
        {
             cout<<i<<" ";
        }
        
    }
}

int main()
{
    int n ;
    cout<<"enter upto to which you want to find prime numbers :";
    cin>>n;

    sievePrime(n);

    return 0;
}
