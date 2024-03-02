//we have to print which digit are there in given number 

#include<iostream>
using namespace std;

void saydigit(int n, string arr[])
{
    if(n==0)
    {
        return;
    }
    
    int digit = n%10;
    n=n/10;

     saydigit(n,arr);
    cout<<arr[digit]<<" ";
cout<<endl;
    // saydigit(n,arr);

}
int main()
{
    string arr[11] ={"zero","one","two","three","four","five","six","seven","eight","nine","ten"};
    saydigit(2540,arr);


    return 0;
}