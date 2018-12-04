#include <iostream>
#include "IntStack.h"
using namespace std;

IntStack::IntStack()
{
    head= NULL;
}
IntStack::~IntStack()
{
    Node *del = head;
    head = head -> next;
    delete del;
}
void IntStack::Push(int val)
{
    assert(!isFull());

   
    Node *temp = new Node;   //allocate new node   
    temp->data = val;
    
   
    temp->next = head;       //insert at head of list
    head = temp;    
 
}
int IntStack::Pop();
{
    assert(!isEmpty());
    
    int result = head->data;  //retrieve front item
    Node * temp = head;
    head = head->next;        //head points to second item
    delete temp;              //deallocate front item
    return result;    

}
bool IntStack::isFull()
{
    return true;
}
bool IntStack::isEmpty()
{
    return head==NULL;
}
