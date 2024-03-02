#include <iostream>
# include<vector>
using namespace std;
//function to print vector elements
void printVec(vector<int>v)
{
    cout<<v.size()<<endl; // size() function is used to get the size of the vector it's time complexity is also O(1)

    for(int i =0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
}
int main()
{   
    //pairs are basically used when we have given some relation between two values or arrays etc of different or same data  to store them
    // pair is a class which is used to create pair of two values
    // two values can be of any data type like int ,string ,double we can make pair of two containers also

    pair<int, string> p;

    // there are two ways to insert values in the pair
    // 1) using maie_pair() function

    p = make_pair(2, "hello");

    // printing values of pair
    cout << p.first << " " << p.second << endl;

    // 2) way
    p = {5, "hii"};
    cout << p.first << " " << p.second << endl;

    // we can assign one pair to another pair but not that copy of that pair will get assign not actual pair

    // pair<int, string> p1 = p;
    // cout << p1.first << " " << p1.second;

    // for example if we change the value of p1.first =3;then there will no any change in the pair p bez copy of p is assigned to p1 so if we want to do change in
    // actual pair use reference operator

    // p1.first = 3;
    cout << p.first << " " << p.second << endl; // no change in p

cout<<"using by reference "<<endl;
pair<int, string> &p1 = p;
 p1.first = 3; //this will also change the value in p means change will be there in the actual pair
cout << p.first << " " << p.second << endl;

// array of pairs 

int a[]={1,2,3}; //let we have some relation  between 1 and 3 then  2 and 4 then 3 and 5 and the operation which we performing on array a that should be performed with be 
// in such cases we will first do the operation on a then after a we will do the same operation b so if we want to do operation on both simultaneously then we will make pair of both 
// for example if we want to do swap in both array so we will make pair of two arrays
int b[]={3,4,5};
pair<int,int>p_array[3] ; //to make array of any data type we just use the square brackets here we will make an array of pairs of size 3 

// put values in the array
p_array[0]={1,3};
p_array[1]={2,4};
p_array[2]={3,5};

// now if we swap the value of 1,3 of first array then automatically 3 and 5 will get swap

swap(p_array[0],p_array[2]); //at 0th index 3,5 will come and at 2nd index of p_array 1,3 will go

//printing the array_of pair
cout<<endl;
for(int i=0;i<3;i++)
{
    cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
}

// we can take input of pairs from users as
// pair<int ,string>p2;
// cin>>p2.first;
// cin>>p2.second;

// -------------------------- VECTOR ----------------------------------

// declaring vector of int 
//first include vector header file

vector<int>v;// intitially it's size is zero it will change dinamically when element is get inserted
int n ;
cout<<"enter no.of elements:";
cin>>n;
for(int i=0;i<n;i++)
{
    int x;
    cout<<"enter the value of x:";
    cin>>x;
    v.push_back(x); //used to insert elements at last of the vector with O(1) time complexity
}

printVec(v);


// declaring vector with initial size
vector<int>v1(10);// declared vector with size 10
// even though we have declared vector with size 10 but we can add more elements in it as it's a dynamic in nature it will automatically double it's size when extra elements we try to add

// initializing vector with some value 
vector<int>v2(10,4); // initializing vector of size 10 with value 4
printVec(v2);

// we can  use pop_back() function to remove last element of the vector
// both push_back() and pop_back() function has O(1) time complexity
v.pop_back();


// we can copy one vector in the another

vector<int>v3 = v2; // here copy of v2 will be there in the v3 not an actual array v2 to assign actual array use reference operator so that changes will be made in the actual vector not in it's copy
// it's time complexity is O(n) as it copies one by one value from one vector to another

//we can make vector of any data type

    return 0;
}