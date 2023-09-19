#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void insertFront(Node **head, int newdata) // at the end of the node
{
    Node *new_node = new Node();
    new_node->data = newdata;
    new_node->next = (*head);
    (*head) = new_node;
}

void addnew(Node **head, int newdata)
{
    Node *new_node = new Node();
    new_node->data = newdata;
    Node *last = *head;
    new_node->next = NULL;
    if (*head == NULL)
    {
        *head = new_node;
        return;
    }
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = new_node;
}

void printList(Node *node)
{
    while (node != NULL)
    {
        cout << " " << node->data;
        node = node->next;
    }
    cout<<endl;
}
void search(Node *head, int datap)
{
    cout<<"To search for "<<datap<<endl;
    int count = 0;
    bool found=false;
    Node *current = head;
    while (current != NULL)
    {
        if (current->data == datap)
        {
            cout << "Found at pos:" << count+1;
            found=true;
            break;
        }
        else
        {
            current = current->next;
            count++;
        }
    }
    if (found==false)
    {
        cout<<"not found"<<endl;
    }
}

int main()
{
    Node *head = NULL;
    // insertFront(&head, 6);
    // insertFront(&head, 5);
    // insertFront(&head, 4);
    // insertFront(&head, 3);
    // insertFront(&head, 2);
    // cout << "Created Linked list is: ";
    // printList(head);
    addnew(&head, 1);
    addnew(&head, 3);
    addnew(&head, 5);
    addnew(&head, 9);
    addnew(&head, 4);
    addnew(&head, 12);
    addnew(&head, 15);
    addnew(&head, 4);
    cout << "List ";
    printList(head);
    search(head, 4);
    return 0;
}