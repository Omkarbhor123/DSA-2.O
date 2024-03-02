#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }

     ~Node() //explicitly written destructor 
      {

        cout << "Deleting node with data: " << data << endl;
    }
};

void delete_At_Head(Node *&head)
{
    if (head == NULL)
    {
        cout << "ll is empty" << endl;
        return;
    }
    Node *temp = head;
    head = head->next;
    delete temp;

    cout << "head deleted successfully" << endl;
}

void delete_AT_Tail(Node *&head)
{
    if (head == NULL)
    {
        cout << "LL is empty" << endl;
        return;
    }
    if (head->next == NULL) // handling when there is only one node in the linked list
    {
        delete_At_Head(head);
        return;
    }

    Node *prev = NULL; //initially it will be null and when end is pointing to last node it will point last second node
    Node *end = head; // initially pointing to first node 

    while (end->next) // itereate till end->next != NULL
    {
        prev = end;
        end = end->next;
    }

    prev->next = NULL; // after deleting the last node the previous node is the last node of linked list and it will point to null
    delete end;
    cout << "last Node of linked list is deleted" << endl;
}

void delete_at_position(Node *&head , int position)
{
    if (head == NULL ) 
    {
        cout << "LL is empty" << endl;
        return;
    }
    if (position==1) // handling for position 1
    {
        delete_At_Head(head);
        return;
    }


    Node *prev = NULL;
    Node *current = head;
    int count =1;

    while (count<position && current!=NULL) // current != NULL will check that we have not exceded the size of the linked list
    {
        prev = current;
        current = current->next;
        count++;
    }

 // If position is greater than the number of nodes
    if (current == NULL)
    {
        cout << "Position " << position << " exceeds the size of the linked list" << endl;
        return;
    }

   prev->next=current->next;
   current->next=NULL;
   delete current;

    cout << "node is deleted at Position "<<position << endl;
}
void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}
int main()
{
    // Node*head =NULL;

    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    Node *fourth = new Node(4);
    Node *fifth = new Node(5);
    Node *sixth = new Node(6);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;

//     print(head);
//     cout << endl;
//     delete_At_Head(head);
//     print(head);
//      cout << endl;
//     delete_AT_Tail(head);

 print(head);
  cout << endl;

  delete_at_position(head , 4);
  print(head);
  cout << endl;
  
   delete_at_position(head , 2);
  print(head);
  cout << endl;
   delete_at_position(head , 1);
  print(head);
  cout << endl;
   delete_at_position(head , 3);
  print(head);
  cout << endl;


 // Deleting remaining nodes to avoid memory leaks
    // while (head != nullptr) {
    //     Node* temp = head;
    //     head = head->next;
    //     delete temp;
    // }

//     print(head);
//   cout << endl;

    return 0;
}