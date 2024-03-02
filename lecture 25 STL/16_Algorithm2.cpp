#include<iostream>
#include<algorithm>
#include<vector>
#include <numeric>
using namespace std;

int main()
{
    
    /*
    int n;
    cout<<"enter the size of the vector :";
    cin>>n;
    vector<int>v(n);

    for(int i=0;i<n;i++)
    {
        cout<<"enter the element :";
        cin>>v[i];
    }


// ------------------------ FOR VECTORS------------------------


//  algorithm functions take starting position and (last + 1 ) position 

// 1) to find minimum element in vector

auto min = min_element(v.begin(),v.end()); // it takes starting and last+1 position and it returns iterator of the minimum element in case of array it returns pointer
cout<<(*min)<<endl;
// we can also find minimum element in particular part of the vector
auto mini = min_element(v.begin()+3,v.end()); // it will start searching for minimum element from third element of the vector (0 based indexing)
cout<<(*mini)<<endl;

// -----------or------------------
int minimum = *min_element(v.begin(),v.end()-2);
cout << minimum<<endl;

//to find maimum element in the vector

auto max = max_element(v.begin(),v.end());
cout<<(*max)<<endl;

//to find sum of the vector accumulate () . it takes three  arguments starting position,last position +1 ,initial sum 

int sum = accumulate(v.begin(),v.end(),0); // first include numeric header file of stl if we want to print sum of the array we will pass initial sum 0 
cout<<sum<<endl;

int sumi = accumulate(v.begin(),v.end(),5); // it will return the total sum of array + initial sum (5) 
cout<<sumi<<endl;

// occurance of particular element in the vector

int ct = count(v.begin(),v.end(),3); // it will return the occurance of 3 in the vector
cout<<ct<<endl;

// to search particular element in the vector find ( ) function is used it returns iterator  

int element = *find(v.begin(),v.end(),2); // as we know that it returns iterator so to get value at the iterator we use * before find
cout<<element <<endl;

// ---------------or---------------
auto it = find(v.begin(),v.end(),7);

if(it!=v.end())
{
    cout<<*it<<endl;
}
else{
    cout<<"Element NOT Found "<<endl;
}


// ---- TO reverse the vector --------------

reverse(v.begin(),v.end()); // it will not create copy it will reverse the vector in the original vector
for(int i=0;i<n;i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;
string str = "omkar bhor";

reverse(str.begin(),str.end());

cout<<str<<endl;

// This Above all operations are take O(n) time complexity in case of vectors and arrays


*/

//--------------------- FOR ARRAYS -----------------------


 int n;
    cout<<"enter the size of the array :";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cout<<"enter the element :";
        cin>>arr[i];
    }




//  algorithm functions take starting position and (last + 1 ) position 

// 1) to find minimum element in array

auto min = min_element(arr,arr+n); // it takes starting and last+1 position and it returns pointer of the minimum element in case of vector it returns iterator
cout<<(*min)<<endl;
// we can also find minimum element in particular part of the array
auto mini = min_element(arr,arr+n); // it will start searching for minimum element from third element of the array (0 based indexing)
cout<<(*mini)<<endl;

// -----------or------------------
int minimum = *min_element(arr,arr+n-2);
cout << minimum<<endl;

//to find maimum element in the array

auto max = max_element(arr,arr+n);
cout<<(*max)<<endl;

//to find sum of the array accumulate () . it takes three  arguments starting position,last position +1 ,initial sum 

int sum = accumulate(arr,arr+n,0); // first include numeric header file of stl if we want to print sum of the array we will pass initial sum 0 
cout<<sum<<endl;

int sumi = accumulate(arr,arr+n,5); // it will return the total sum of array + initial sum (5) 
cout<<sumi<<endl;

// occurance of particular element in the array

int ct = count(arr,arr+n,3); // it will return the occurance of 3 in the array
cout<<ct<<endl;

// to search particular element in the array find ( ) function is used it returns iterator  

int element = *find(arr,arr+n,2); // as we know that it returns iterator so to get value at the iterator we use * before find
cout<<element <<endl;

// ---------------or---------------
auto it = find(arr,arr+n,7);

if(it != arr+n)
{
    cout<<(*it)<<endl;
}
else{
    cout<<"Element NOT Found "<<endl;
}


// ---- TO reverse the vector --------------

reverse(arr,arr+n); // it will not create copy it will reverse the vector in the original vector
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
string str = "omkar bhor";

reverse(str.begin(),str.end());

cout<<str<<endl;




    return 0;
}