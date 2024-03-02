#include <iostream>
#include <vector>
using namespace std;
//printing array of vectors  // vector of vector
void array_of_vector (vector<int>&v)
{
     cout<<"Size :"<<v.size()<<endl;

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" "; 
    } 
    cout<<endl;
}
void printVec(vector<pair<int,int>>&v)
{
    cout<<"Size :"<<v.size()<<endl;

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl; // v[i] indicates the elements of the vector and each element is contains pair of integer 
    } 
}

int main()
{
    /*
    // creating and initializing vector of pairs
    vector<pair<int, int>> v = {{1, 2}, {3, 4}, {5, 6}};
    printVec(v);
 
// taking user input for vector of pairs 

vector<pair<int, int>> v1;
 int n ;
 cout<<"enter no.of elements you want to insert:";
 cin>>n;

 for(int i=0;i<n;i++)
 {
    int x,y;
    cin>>x>>y;
    // v1.push_back({x,y});
    // ------ or -----
    v1.push_back(make_pair(x,y));
 }

printVec(v1);

// ------------------- Array of vector ------------

int m;
cout<<"enter no. of vectors you want to make : ";
cin>>m;

vector<int>v2[m]; //declaring n vectors inside vector v2 .array of vector is like 2 dimentional array . here number of rows are fix but no. of columns are variable

for(int i= 0;i<m;i++)
{   
    int a;
    cout<<"enter the size of "<<i<<"th vector inside the vector v :";
    cin>>a;
    for(int j = 0;j<a;j++)
    {
        int x; 
        cout<<"value of "<<j<<"th position inside the vector of vector:";
        cin>>x;

        v2[i].push_back(x); // v2[i] is vector of vector 
    }

}

//printing the vector of array
for(int i=0;i<m;i++)
{
    array_of_vector(v2[i]);// v2[i] indicating array inside the vector v2
}

*/

//---------------- Vector of Vector ---------------------------------

int N;
cout<<"enter no. of vectors you want to make : "; //inside vector v3
cin>>N;

vector<vector<int>>v3; //declaring vector of vectors here no. of rows and columns both are variable

for(int i= 0;i<N;i++) // to track vectors inside the vector v3
{   
    int a;  // size of vector inside the vector v3
    cout<<"enter the size of "<<i<<"th vector inside the vector v :";
    cin>>a;
    vector<int>temp; //  creating the temporary vector to store values this temporary vector will will directly push inside the vector v3
    for(int j = 0;j<a;j++)
    {
        int x; 
        cout<<"value of "<<j<<"th position inside the vector of vector:";
        cin>>x; //taking the elements of the vector inside the vector v3

       temp.push_back(x);
    }

    v3.push_back(temp);

}

//printing the vector of array
for(int i=0;i<N;i++)
{
    array_of_vector(v3[i]);// v2[i] indicating vector inside the vector v3
}

// to print elements inside the vector of vector 

cout<<v3[1][2];//the 1 indicates the first vector inside the vector v3 and 2 indicates the position inside the vector of vector1 

    return 0;
}