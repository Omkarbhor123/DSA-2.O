#include<iostream>
#include<set>
using namespace std;

// ordered set : ordered set stores unique elements in sorted order

void print(set<string>&s)
{
    for(string it :s )
    {
        cout<<it<<" ";
    }
    cout<<endl;
}
int main()
{
    set<string>s;

    s.insert("omkar"); //O (log(n))
    s.insert("yash");
    s.insert("ritesh");

    print(s);

// ------------- find() method  and erase() method ----------------

auto it = s.find("ritesh"); //O (log(n)) // it returns the iterator of the element if found else it returns .end() iterator

if(it!=s.end())
{
    s.erase(it); // using iterator
}

print(s);

//----------------- or -----------------
s.erase("yash"); //using directly value
print(s);




    return 0;
}