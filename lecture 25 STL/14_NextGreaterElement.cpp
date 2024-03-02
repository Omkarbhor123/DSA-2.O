
// see luv channel

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int>Next_Greater_Element(vector<int> v)
{
    vector<int>nge(v.size());
    stack<int>st;

    for(int i=0;i<v.size();i++)
    {
        while(!st.empty() && v[i]>v[st.top()])
        {
            nge[st.top()] = i;
            st.pop();
        }

        st.push(i);
    }
    while(!st.empty())
    {
        nge[st.top()] = -1;
        st.pop();
    }
    return nge;
}
int main()
{
    int n;
    cout<<"Enter the size of the vector :"; 
    cin>>n;
    vector<int>v(n);

    for(int i=0;i<n;i++)
    {   
        cout<<"enter element : ";
        cin>>v[i];
    }

    vector<int> nge = Next_Greater_Element(v); //function call 

    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" "<<(nge[i] == -1 ? -1 : v[nge[i]])<<endl;
    }


    return 0;
}