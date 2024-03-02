#include<iostream>
#include<queue>
using namespace std;

// Queue :  it is a first in first out data structure (FIFO)

int main()
{
    queue<string>q;

    q.push("omkar");
    q.push("ritesh");
    q.push("yash");
    q.push("pratik");
    q.push("srffg");
    
    q.pop();
      while(!q.empty())
    {
        cout<<q.front()<<endl;  // it will print front element of the queue
        q.pop(); // it deletes element from front
                                
    }
    return 0;
}