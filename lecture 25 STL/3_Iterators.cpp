#include <iostream>
#include<vector>
using namespace std;

int main()
{
    // iterators are basically pointers like structured which points to the elements of the container
    vector<int>v={1,2,4,5,6,7};

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }

cout<<endl;
// the iterator which points at first position element is called .begin() iterator  and .end() iterator points at last+1 position 

// creating an iterator 
// vector<int>:: iterator itr;
vector<int>:: iterator itr=v.begin(); // iterator of vector
// to get value of the iterator we use * operator
cout<<*itr; // it's a value 
cout<<(*(itr+1))<<endl; //NOTE : itr+1 or itr-1 like this only work when there is continuous memory allocation like vectors,arrays etc but it will not work for map, set etc.bez there is no continuous memory allocation (itr++ will work in case of map ,set ,non continuous memory allocation  ) 

//printing elements of vector using  begin and end iterator

for( itr=v.begin();itr!=v.end();itr++)
{
    cout<<*itr;
}
cout<<endl;


// iterator for vector of pairs

vector<pair<int,int>>v_p = {{1,3},{3,4},{5,6},{7,4}};

vector<pair<int,int>> :: iterator it; //iterator for vector pairs it is pointing to the pairs of the vector

for(it=v_p.begin();it!=v_p.end();it++)
{
    // cout<<(*it).first<<" "<<(*it).second<<endl;
    // ------------------------ or ------------------
    cout<<it->first<<" "<<it->second<<endl;
}

// Above code is too lengthy  so to avoid this much line of code there is solution let's see

// 1) range based loop (this works in all containers)

for(int traverser: v) // NOTE : there is no actual value will come inside the traverser copy of value will come from the vector so if we modify the vlaue using traverser then there will no any change inside the vector 
{
    cout<<traverser<<" "; // to make change in the actual position we need to use reference operator
}
cout<<endl;

// like this
for(int &traverser: v) // now if we modify traverser then there will be change in actual vector as traverser is pointing to the elements of the vector and we are incrementing trverser
{
    traverser++;
    cout<<traverser<<" "; 
}
cout<<endl;


// 2)  auto keyword :  it dynamically determine the data type of the variable or container

//vector<pair<int,int>> :: iterator it; NO need to write this thing when we use auto keyword

for(auto it =v_p.begin();it!=v_p.end();it++)
{
    cout<<it->first<<" "<<it->second<<endl;
}

cout<<endl;
vector<pair<int,int>>vp1={{1,5},{3,2},{3,4}};

for(auto it =v_p.begin();it!=v_p.end();it++)
{
    cout<<it->first<<" "<<it->second<<endl;
}





    return 0;
}