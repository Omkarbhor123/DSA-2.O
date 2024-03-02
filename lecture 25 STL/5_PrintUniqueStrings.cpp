/*Given N strings , print unique strings in lexiographical order with their frequency */

#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<string,int>m; // we taken string as key bez we want unique strings and we know that map stores unique keys and we want frequency count which will be in integer

    int n;
    cout<<"Enter the number of strings : ";
    cin>>n;

    //taking input
    for(int i= 0;i<n;i++)
    {
        string s;
        cout<<"enter the string:";
        cin>>s;

        m[s]++; // when we just write m[] it automatically get initialized with 0 here s is a key 
    }

cout<<endl;

//printing output
for(auto it :m)
{
    cout<<it.first<<" "<<it.second<<endl;
}


    return 0;
}