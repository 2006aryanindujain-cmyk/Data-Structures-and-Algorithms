#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data1, Node *node1)
    {
        data = data1;
        next = node1;
    }
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};
Node *vector2ll(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *temp = head;
    Node *newnode;
    for (int i = 1; i < arr.size(); i++)
    {
        newnode = new Node(arr[i]);
        temp->next = newnode;
        temp = newnode;
    }
    return head;
}
Node *InsertionAtHead(Node *head)
{
    int value;
    cout << "Enter the value you want to insert at the begining of a linked list:";
    cin >> value;
    cout << endl;
    Node *newnode = new Node(value);
    newnode->next = head;
    head = newnode;
    return head;
}
Node *InsertionAtEnd(Node *head)
{
    int value;
    cout << "Enter the value you want to insert at the end of a linked list:";
    cin >> value;
    cout << endl;
    if(head==nullptr)
    {
        return new Node(value);
    }
    Node *temp = head;
    while (temp->next)
    {
        temp = temp->next;
    }
    Node *newnode = new Node(value);
    temp->next = newnode;
    return head;
}
Node *InsertionAfterPosition(Node *head)
{
    Node *temp = head;
    int pos;
    cout << "Enter the position after which you want to insert the value in a given linked list:";
    cin >> pos;
    cout << endl;
    int value;
    cout << "Enter the value you want to insert after the position of a linked list:";
    cin >> value;
    cout << endl;
    while (pos > 0 && temp != nullptr)
    {
        temp = temp->next;
        pos--;
    }
    if (temp == nullptr)
    {
        return head;
    }
    Node *newnode = new Node(value);
    newnode->next = temp->next;
    temp->next = newnode;
    return head;
}
Node *InsertionAtPosition(Node *head)
{
    Node *temp = head;
    int pos;
    cout << "Enter the position at which you want to insert the value in a given linked list:";
    cin >> pos;
    cout << endl;
    int value;
    cout << "Enter the value you want to insert:";
    cin >> value;
    cout << endl;
    Node *newnode;
    if (pos == 0)
    {
        newnode = new Node(value);
        newnode->next = head;
        head = newnode;
        return head;
    }
    while (pos > 1 && temp != nullptr)
    {
        temp = temp->next;
        pos--;
    }
    if (temp == nullptr)
    {
        return head;
    }
    newnode = new Node(value);
    newnode->next = temp->next;
    temp->next = newnode;
    return head;
}
Node *InsertionBeforePosition(Node *head)
{
    int pos;
    cout << "Enter the position before which you want to insert the value in a given linked list:";
    cin >> pos;
    cout << endl;
    int value;
    cout << "Enter the value you want to insert:";
    cin >> value;
    cout << endl;
    Node *newnode;
    if (pos <= 0)
    {
        newnode=new Node(value);
        newnode->next = head;
        head = newnode;
        return head;
    }
    Node *temp = head;
    while (pos > 1 && temp != nullptr)
    {
        temp = temp->next;
        pos--;
    }
    if (temp == nullptr)
    {
        return head;
    }
    newnode = new Node(value);
    newnode->next = temp->next;
    temp->next = newnode;
    return head;
}
void traverse(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    return;
}
int main()
{
    int n;
    cout << "Enter the size of a vector:";
    cin >> n;
    vector<int> arr;
    cout << "Enter the vector elements:";
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        arr.push_back(value);
    }
    Node *head = vector2ll(arr);
    traverse(head);
    head = InsertionAtHead(head);
    traverse(head);
    head = InsertionAtEnd(head);
    traverse(head);
    head = InsertionAfterPosition(head);
    traverse(head);
    head = InsertionAtPosition(head);
    traverse(head);
    head = InsertionBeforePosition(head);
    traverse(head);
}