#include<iostream>
#include<map>
using namespace std;

// map : it's a data structure which stores key value pair
// red black tree data strctured is used for internal implementation of map 
// Every element of the map is pair of key and value
// there is no continuous memory allocation for map so we can't use iterator for ex : itr as itr+1 or itr - 1  but we can use itr++ ,itr-- 
// we can take key and value as any data type also we can take it as container also     
// Map stores values in sorted order
// Map keys are unique we can not insert duplicate keys in the map if we try to do that then it will replace the values of previously inserted key
// time complexity of inserting and accessing element for map is : O(log(n))


void PrintMap( map<int,string>&m)
{
    cout<<"Size : "<<m.size()<<endl<<endl;
    for(auto &it : m)
    {
        cout<<it.first<<" "<<it.second<<endl;

    }

}
int main()
{
    // creating the map
    map<int,string>m;

    //inserting values in the map
    m[1]="omkar"; // O (log(n)) time complexity of inserting element in the map
    m[2]="yash";
    m[3]="ritesh";

// ------------ OR ------------

m.insert({1,"omkar"});
m.insert({2,"yash"});
m.insert({3,"ritesh"});

// --------------- or ---------------
m.insert(make_pair(1,"omkar"));
m.insert(make_pair(2,"yash"));
m.insert(make_pair(3,"ritesh"));


map<int,string>::iterator itr; //  creating an iterator for map

for(itr=m.begin();itr!=m.end();itr++)
{
    cout<<itr->first<<" "<<itr->second<<endl;

    // -------------- OR -----------

    // cout<<(*itr).first<<" "<<(*itr).second<<endl;
}

cout<<endl;
PrintMap(m);

cout<<endl;

// ------------- find()  Method-------------------

auto it = m.find(3); //time complexity of find() method is O(log(n)) and the find function returns iterator of the element if element is present else it returns ( last + 1 ) position or .end() position 

if(it==m.end())
{
    cout<<"NOT FOUND"<<endl;

}
else 
 {   cout<<"Found"<<endl;
    cout<<it->first<<" "<<it->second<<endl;
 }


//  --------------- erase() Method --------------
// it erase the value with O(log(n)) time complexity and it takes two type of inputs 
// 1) Key 

cout<<"erasing the map vale of key 3"<<endl<<endl;
m.erase(3);
PrintMap(m);

// 2) using Iterator

auto iter = m.find(7); 
if(iter!=m.end()) // if we try to erase the element which is not present in the map and iterator is reached at the end then erase function will show error as segmentation fault so use if condition 
{
    m.erase(iter);
}

PrintMap(m);

//--------------- clear() method  ---------------
//it deletes all the elements of the map 
// this clear method works in all containers

m.clear();

cout<<endl;

PrintMap(m);






    return 0;
}