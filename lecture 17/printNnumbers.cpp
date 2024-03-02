
// print numbersfrom 1 to n and n to 1 
//loveBubber lecture

#include<iostream>
using namespace std;

void printReverse(int n)
{
    if(n==0) //base case
    {
        return; //stop and go back
    }

    cout<<n<<endl;

    printReverse(n-1); //recurance relation
}

void printNormal(int n)
{
    if(n==0) //base case
    {
        return; //stop and go back
    }

    printNormal(n-1); //recurance relation

    cout<<n<<endl;

    
}

int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;

    printReverse(n);
    cout<<endl;
    printNormal(n);

    return 0;
}