#include <bits/stdc++.h>
using namespace std;

class node
{
public:
  int data;
  node *next;

  node(int val)
  {
    data = val;
    next = NULL;
  }
};

void insAtHead(node *&head, int val)
{
  node *n = new node(val);
  n->next = head;
  head = n;
}
void insTail(node *&head, int val)
{
  node *n = new node(val);
  if (head == NULL)
  {
    head = n;
    return;
  }
  node *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = n;
}

bool search(node *head, int k)
{
  node *temp = head;
  while (temp != NULL)
  {
    if (temp->data == k)
    {
      cout << "exist";
      return true;
    }
    temp = temp->next;
  }
  cout << "doesnt exist";
  return false;
}
void display(node *head)
{
  node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << "->";
    temp = temp->next;
  }
}

void deleteAtHead(node* &head)
{
  node* tempdel=head;
  head=head->next;

  delete tempdel;
}
void deletetion(node* &head,int val)
{
  node* temp=head;
  while(temp->next->data!=val)
  {
    temp=temp->next;
  }
  node* todelete=temp->next;
  temp->next=temp->next->next;
  delete todelete;
}

node* reverse(node* &head)
{
  node* prevptr=NULL;
  node* currptr=head;
  node* nextptr;

  while(currptr!=NULL)
  {
    nextptr=currptr->next;
    currptr->next=prevptr;

    prevptr=currptr;
    currptr=nextptr;
  }
  return prevptr;
}
int main()
{
  node *head = NULL;
  insTail(head, 3);
  insTail(head, 6);
  insTail(head, 1);
  insTail(head, 34);  
  insAtHead(head, 69);
  display(head);
  cout << "search" << endl;
  search(head, 6);
  // deletetion(head,1);
  deleteAtHead(head);
  display(head);
  node* newhead=reverse(head);
  display(head);
  return 0;
}