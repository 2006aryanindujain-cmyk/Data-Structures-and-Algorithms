// Doubly Linked Lists,  as the name suggests, allows 2-way traversal by introducing two pointers
// in each node. This enables seamless traversal in both directions, making them a valuable tool for
// various advanced data structure applications.

// Creation of doubly linked list :-
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int data1, Node *prev1, Node *next1)
    {
        data = data1;
        prev = prev1;
        next = next1;
    }
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
    Node(int data1, Node *prev1)
    {
        data = data1;
        prev = prev1;
        next = nullptr;
    }
};
Node *Array2DoublyLL(vector<int> &arr)
{
    if (arr.empty())
    {
        return nullptr;
    }
    Node *head = new Node(arr[0]);
    Node *temp = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *newnode = new Node(arr[i], temp);
        temp->next = newnode;
        temp = newnode;
    }
    return head;
}
void traversal(Node *head)
{
    if (head == nullptr)
    {
        return;
    }
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
Node *DeletionAtHead(Node *head)
{
    if (head == nullptr)
    {
        return nullptr;
    }
    if (head->next == nullptr)
    {
        delete head;
        return nullptr;
    }
    Node *temp = head;
    head = head->next;
    head->prev = nullptr;
    temp->next = nullptr;
    delete temp;
    return head;
}
Node *DeletionAtEnd(Node *head)
{
    if (head == nullptr)
    {
        return nullptr;
    }
    if (head->next == nullptr)
    {
        delete head;
        return nullptr;
    }
    Node *temp = head;
    while (temp->next->next)
    {
        temp = temp->next;
    }
    Node *p = temp->next;
    temp->next = nullptr;
    p->prev = nullptr;
    delete p;
    return head;
}
Node *DeletionOfKthElement(Node *head)
{
    if (head == nullptr)
    {
        return nullptr;
    }
    int k;
    cout << "Enter the position of the element you want to delete: ";
    cin >> k;
    if (k <= 0)
    {
        return head;
    }
    int count = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        count++;
        if (count == k)
        {
            break;
        }
        temp = temp->next;
    }
    if (temp == nullptr)
    {
        return head;
    }
    Node *prev = temp->prev;
    Node *next = temp->next;
    if (prev == nullptr && next == nullptr)
    {
        delete temp;
        return nullptr;
    }
    else if (prev == nullptr)
    {
        return DeletionAtHead(head);
    }
    else if (next == nullptr)
    {
        return DeletionAtEnd(head);
    }
    prev->next = next;
    next->prev = prev;
    temp->next = nullptr;
    temp->prev = nullptr;
    delete temp;
    return head;
}
void deleteNode(Node *temp)
{
    Node *prev = temp->prev;
    Node *next = temp->next;
    if (next == nullptr)
    {
        prev->next = nullptr;
        temp->prev = nullptr;
        delete temp;
        return;
    }
    prev->next = next;
    next->prev = prev;
    temp->prev = nullptr;
    temp->next = nullptr;
    delete temp;
    return;
}
int main()
{
    int n;
    cout << "Enter the vector size:";
    cin >> n;
    vector<int> arr;
    int value;
    cout << "Enter the elements in a vector";
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        arr.push_back(value);
    }
    Node *head = Array2DoublyLL(arr);
    traversal(head);
    head = DeletionAtHead(head);
    traversal(head);
    head = DeletionAtEnd(head);
    traversal(head);
    head = DeletionOfKthElement(head);
    traversal(head);
    int k;
    cout << "Enter the position of the node you want to delete: ";
    cin >> k;
    if (k <= 0)
    {
        cout << "Invalid position" << endl;
    }
    else
    {
        Node *temp = head;
        int count = 1;

        while (temp != nullptr && count < k)
        {
            temp = temp->next;
            count++;
        }

        if (temp == nullptr)
        {
            cout << "Invalid position" << endl;
        }
        else if (temp == head)
        {
            head = DeletionAtHead(head);
        }
        else
        {
            deleteNode(temp);
        }
    }
    traversal(head);
    while (head != nullptr)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    return 0;
}