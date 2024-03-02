#include<iostream>
using namespace std;
int floor_Sqrt(int n)
{
    if(n==0||n==1)
    {
        return n;
    }

    int result=1;
    int i=1;

    while(result<=n)
    {
        i++;
        result=i*i;
    }
    return i-1;

}
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;

    int squareRoot = floor_Sqrt(n);
    cout<<"The square Root of "<<n<<" is :"<<squareRoot;
    return 0;
}