/*Given N strings and q queries, In each query you are given a string print yes if string 
is present else print NO*/


#include<iostream>
#include<unordered_set>
using namespace std;

// unordered set is same as set but :
// 1) it does not store the values in the sorted order or according to given input order
// 2) it's insertion and find time complexity is O(1) wich is better than ordered set
// 3) we can not put complex data types in the unordered set means rather than inbuilt datatypes
int main()
{
     unordered_set<string>s;
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

cout<<endl;
    // ---- taking query input-------

    int q;
    cout<<"enter the number of queries :";
    cin>>q;
cout<<endl;
    while(q--)
    {
        string str;
        cout<<"Enter the first query :";
        cin>>str;
        cout<<endl;
        if(s.find(str)==s.end())
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}