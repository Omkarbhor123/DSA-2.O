

#include<iostream>
#include<stack>
#include<unordered_map>
using namespace std;

unordered_map<char,int>symbols = {{'[',-1},{'{',-2},{'(',-3},{']',+1},{'}',+2},{')',+3}}; // we have assigned value for each type of bracket if incoming bracket is opening bracket then we will check it's value is negative or not  if 
// incoming bracket is closing we will check it's value is positive or not in theunordered_map

string isBalanced(string s)
{
    stack<char>st; //  we will going to check each parenthesis or character of the string so make character stack
    for(char bracket : s)
    {
        if(symbols[bracket]<0) // checking the incoming bracket if it's less than 0 means negative then it's an opening bracket so we will push it in the stack
        {
            st.push(bracket);
        }
        else    // if incoming bracket is closing bracket then we will check it's corresponding opening bracket is present or not inside the stack
        {
            if(st.empty()) // if stack is already empty then there is no matching bracket so return not balanced
            {
                return "NOT Balanced Paranthesis";
            }

            //if stack is not empty then store it's top and add it's value with incoming bracket if it's sum is zero then it means matching is there for incoming bracket
            char top = st.top(); 
            st.pop(); // remove top after storing it another variable
            if(symbols[top]+symbols[bracket]!=0)
            {
                return "NOT Balanced Paranthesis";
            }
        }
 
    }

    if(st.empty())
    {
        return "Balanced Paranthesis";
    }
    else
    {
        return "NOT Balanced Paranthesis";
    }



}

int main()
{
    int t;
    cout<<"enter the number of string paranthesis you want to check :";
    cin>>t;
    cout<<endl;

    while(t--)
    {
        string s;
        cout<<"enter string :";
        cin>>s;
        cout<<endl;
        cout<<isBalanced(s)<<endl;
    }
    
    return 0;
}