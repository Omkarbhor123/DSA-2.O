#include<iostream>
#include<set>
using namespace std;

// multiset set is same as set but :
// first include set header file
// 1) it can store multiple duplicate values 
// 2) it is internally implemented using red black tree
// it stores values in sorted order
void print( multiset<string>&s)
{
    for(auto it:s)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}
int main()
{
     multiset<string>s;

    s.insert("omkar"); //O(log(n))
    s.insert("yash");
    s.insert("ritesh");
    s.insert("omkar");
    s.insert("yash");

    auto it = s.find("yash"); // O(log(n))

cout<<"deleting yash only one yash will get delete :"<<endl;

    if(it!= s.end())
    {
        s.erase(it); // when we give iterator as argument to erase function then it deletes first element whcih found it will not delete all the values which you want to delete 
    }


print(s);

cout<<"deleting omkar without iterator by passing directly value"<<endl;
s.erase("omkar"); // when we write erase and give argument as value then it deletes all the values which match with given argument from the set
print(s);


    return 0;
}