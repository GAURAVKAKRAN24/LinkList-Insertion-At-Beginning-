#include <iostream>
#include <cstdlib>
using namespace std;
struct Node{
  int data;     //Integer vairiable
  Node *next;   //Pointer to Node means contain a Node
};
Node *head = NULL;   //Global Pointer Initialize starting to NULL
void CreateNode(int data)     //A function create a Node
{
  Node *NewNode = new Node;   //Memoery Initialize to Node
  NewNode->data = data;     //Set data into Node
  NewNode->next = head;    //set the address is NULL because node is not containing any node Initially
  head = NewNode;           //Assign a Node at head
}
void print()         //List traversal function
{
  if(head == NULL)       // when become a node empty
  {
    cout<<"List is empty!\n";
    return;
  }
  Node *temp = head;   // Given the reference to temp pointer variable
  while(temp != NULL)
  {
    cout<<temp->data<<" ";
    temp = temp->next;
  }
cout<<endl;
}
int main()
{
  print();
  CreateNode(10);
  CreateNode(10);
  CreateNode(10);
  CreateNode(20);
  print();
}
