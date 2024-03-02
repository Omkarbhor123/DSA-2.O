#include<iostream>
#include<unordered_map>
using namespace std;

//firstly include  header file : #include<unordered_map>
// unordered map : unordered map uses Hash Table for implementation it is same as map but only difference is
// 1)  it doesn't store keys in sorted order and also not according to given order 
// 2) it's average time complexity of insertion ,accessing ,erase,clear is O(1)
// 3) in unorder map we can not use complex data types such as pairs,vectors ,etc.  we can only use inbuilt data types as a key but it's work in map
// all remaining things are same as map

int main()
{
    unordered_map<int,int> um;
    
    return 0;
}