#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string str ="3452";

    sort(str.begin(),str.end());
    reverse(str.begin(),str.end());
    cout<<str<<endl;

//    ---------------- or ------------

string st ="5272";

 sort(st.begin(),st.end(),greater<int>()); //third argument is  greater<int>(): 
//  This is a functional object defined in the <functional> header. greater<int>() is a
//  comparison function object that compares two elements using the greater-than operator (>).
//  When used in sort(), it sorts elements in descending order.

cout<<st<<endl;
    return 0;
}