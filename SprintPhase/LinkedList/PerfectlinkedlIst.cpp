#include <bits/stdc++.h>
using namespace std;
// t 1 t 2 t 3 t 4 t 5
class Node
{
public:
    int data;

    Node *next;
};

void addAtTail(Node *&head, int newdata)

{
    Node *new_node = new Node();
    new_node->data = newdata;
    new_node->next = NULL;
    Node *temp = head;
    if (head == NULL)
    {
        head = new_node;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}
void insertAtFront(Node *&head, int newdata)
{
    Node *new_node = new Node();
    new_node->data = newdata;
    new_node->next = head;
    head = new_node;
}
void searchLL(Node *node, int key)
{
    int count = -1;
    while (node != NULL)
    {
        count++;
        if (node->data == key)
        {
            cout << "Item found at position: " << count;
            return;
        }
        node = node->next;
    }
    if (count == 0)
    {
        cout << "Item not found" << endl;
    }
}

void reverseLL(Node *&head)
{
    Node* prev=NULL;
    Node* next=NULL;
    Node* current=head;

    while(current!=NULL)
    {
        next=current->next;

        current->next=prev;

        prev=current;
        current=next;

    }
    head=prev;

}



void printList(Node *node)
{
    while (node != NULL)
    {
        cout << "->" << node->data;
        node = node->next;
    }
    cout << endl;
}

int main()
{

    Node *head = NULL;

    char n = 'b';

    while (n != 'a')
    {
        cout << "T to add at tail\n F to add in front\n s to search a node\n r to reverse linked list \n p to print the list  " << endl;
        cout << " a to stop" << endl;
        cin >> n;
        switch (n)
        {
        case 't':
        {
            int x;
            cout << "Number to add at tail: ";
            cin >> x;
            addAtTail(head, x);
            printList(head);

            break;
        }
        case 'f':
        {
            int x;
            cout << "Number to add in front: ";
            cin >> x;
            insertAtFront(head, x);
            printList(head);

            break;
        }
        case 's':
        {
            int x;
            cout << "Number to search: ";
            cin >> x;
            searchLL(head, x);

            break;
        }
        case 'r':
        {
            cout<<"Old list"<<endl;
            printList(head); 
            cout<<"\n new list\n";
            reverseLL(head);
            printList(head); 
            break;

        }
        case 'p':
        {
            printList(head);
            break;
        }
        default:
            break;
        }
    }

    return 0;
}