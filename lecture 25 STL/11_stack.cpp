#include<iostream>
#include<stack>
using namespace std;

// Stack: it follows the last in first out (LIFO) order
// when we insert element in the stack then that always get inserted at the top of of the stack and when we pop the element from the stack then that always get's poped from top only
int main()
{
    stack<int>s;
    s.push(2);
    s.push(5);
    s.push(7);
    s.push(9);

    while(!s.empty())
    {
        cout<<s.top()<<endl; // printing top element of the stack
        s.pop();// deleting top element of the stack
    }
    return 0;
}