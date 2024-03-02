/*Given N strings print unique strings in lexiographical order*/

#include<iostream>
#include<set>
using namespace std;
// we know that set always store values in sorted ordered and unique vlues
int main()
{
    set<string>s;
    int n;
    cout<<"enter no of strings : ";
    cin>>n;

    for(int i=0;i<n;i++)
    {   
        string str;
        cout<<"enter the "<<i+1<< "th string : ";
        cin>>str;
        s.insert(str);
    }

    for(auto i :s)
    {
        cout<<i<<" ";
    }



    return 0;
}