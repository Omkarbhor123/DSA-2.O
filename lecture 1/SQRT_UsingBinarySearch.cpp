#include<iostream>
using namespace std;
void floorSquareRoot(int n)
{
    int low =1;
    int high = n;

    while(low<=high)
    {
        long long mid = (low+high)/2;
        long long val = (mid*mid);

        if(val<=n)
        {
            low = mid+1;
        }
        else
        {
            high = mid - 1;
        }

    }

    cout<< high;
}
int main()
{
    int n;
    cout<<"enter the number :";
    cin>>n;

  floorSquareRoot(n);

    return 0;
}