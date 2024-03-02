#include <iostream>
using namespace std;

// creating ,inserting ,searching ,traversing singly linked list;

int size = 0;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
        size++; // when object (here new node ) is get created size of the linkedlist is incremented
    }
};

void InsertAtTail(Node *&head, int val)
{
    Node *temp = new Node(val);

    if (head == NULL)
    {
        head = temp;
        cout << "Node Inserted successfully at Tail" << endl;
        cout << "current size of linked list is : " << size << endl;
        return;
    }

    Node *traverse = head;

    while (traverse->next != NULL)
    {
        traverse = traverse->next;
    }

    traverse->next = temp;
    cout << "Node Inserted successfully at Tail" << endl;
    cout << "current size of linked list is : " << size << endl;
}

void InsertAtHead(Node *&head, int val)
{
    Node *temp = new Node(val);

    if (head == NULL)
    {
        head = temp;
        cout << "Node Inserted successfully at Head" << endl;
        cout << "current size of linked list is : " << size << endl;
        return;
    }

    temp->next = head;
    head = temp;
    cout << "Node Inserted successfully at Head" << endl;
    cout << "current size of linked list is : " << size << endl;
}

void insertAtPosition(Node *&head, int val, int position)
{
    
     if (head == NULL || position == 1) //this condition will be written firstly before next if condition
    {
        InsertAtHead(head, val);
        return;
    }

    if (position < 1 || position > size + 1)
    {
        cout << "Invalid position\n";
        return;
    }


    // Traverse to the node before the position

    Node *prev = head;
    int count = 1;

    while (count < (position - 1))
    {
        prev = prev->next;
        count++;
    }

    // handling tail position

    if (prev->next == NULL)// last node+1 position
    {
        InsertAtTail(head, val);
        return;
    }

    // hadling when position is not both head or tail means in between head and tail

    Node *temp = new Node(val);
    temp->next = prev->next;
    prev->next = temp;
    cout << "Node Inserted successfully at Position " << position << endl;
    cout << "current size of linked list is : " << size << endl;
}

void print(Node *head)
{
    Node *traverser = head;
    while (traverser != NULL)
    {
        cout << traverser->data << "->";
        traverser = traverser->next;
    }

    cout << "NULL" << endl;
}

/*
in while loop initially condition will be checked and then data is printed after that we are incrementing the pointer. After the first 
iteration the condition is checked only after the incrementation of the traverser pointer so when traverser print the data of the node which is before the last node and after that 
traverser pointer is incremented now for next iteration the traverser-next == NULL so the while loop will get terminate before printing the last node so

If we modify the loop condition to while(traverser->next != NULL) instead of while(traverser != NULL), 
the last node's data will not be printed. This is because when traverser points to the last node, traverser->next will be NULL,
causing the loop to terminate before printing the last node's data.
*/

int main()
{
    Node *head = NULL;
    // insertAtPosition(head, 100, -1);
    // insertAtPosition(head, 200, 1);
    // insertAtPosition(head, 300, 2);
    // insertAtPosition(head, 400, 3);
    // insertAtPosition(head, 500, 5);
    // insertAtPosition(head, 000, 0);
    cout<<"current size of linked list is :"<<size<<endl;
     insertAtPosition(head, 200, 2);

    print(head);

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