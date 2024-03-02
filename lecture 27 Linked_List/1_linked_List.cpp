#include<iostream>
using namespace std;
// creting and printing singly linked list using implicit default constructor


//structure of linked list
class Node
{
    public:
        int data;
        Node*next; // pointer of Node data type which is used to create lind between nodes

};
int main()
{
    // the new keyword will create object and allocate memory on heap and it will return pointer to that memory. The Node() is a 
    //implicit default constructor provided by the compiler which will initialize the object created by the new keyword

    Node*head =new Node();  // while cretating an object the default constructor will automatically get's called
    Node*second =new Node();
    Node*third = new Node();
    Node*fourth = new Node();

//assigning the values to node

head->data=1;
second->data=2;
third->data=3;
fourth->data=4;

//creating links between nodes

head->next=second;
second->next=third;
third->next=fourth;
fourth->next=NULL;

//printing linked list


Node*traverser = head;

while(traverser!=NULL)
{
    cout<< traverser->data<<"->";
    traverser=traverser->next;
}
    
/*
in while loop we firstly printing the data after that we are incrementing the pointer 
If we modify the loop condition to while(traverser->next != NULL) instead of while(traverser != NULL), 
the last node's data will not be printed. This is because when traverser points to the last node, traverser->next will be NULL,
causing the loop to terminate before printing the last node's data.
*/

//deallocating memory

delete head;
delete second;
delete third;
delete fourth;


    return 0;
}

/*

In the context of linked lists, the difference between traverser != NULL and traverser->next != NULL is crucial for 
understanding how to iterate and manipulate the list correctly. Here's a breakdown:

1. traverser != NULL:

This condition checks if the traverser pointer itself is not pointing to NULL.
It's USED to determine whether the TRAVERSAL HAS REACHED THE END OF THE LIST.
If traverser is NULL, it means there are no more nodes to process.

2. traverser->next != NULL:

This condition checks if the next pointer of the node pointed to by traverser is not NULL.
It's USED to determine if the current NODE HAS A SUBSEQUENT(NEXT) NODE IN THE LIST
If traverser->next is NULL, it means the current node is the last node in the list.

Key Differences:

traverser != NULL checks the pointer itself, while traverser->next != NULL checks the next pointer of the pointed-to node.
The first condition is used to stop the traversal at the end, while the second is used to move to the next node during traversal.

*/