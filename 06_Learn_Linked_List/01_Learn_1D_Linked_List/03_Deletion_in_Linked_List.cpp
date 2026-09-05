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
    if (arr.empty())
    {
        return nullptr;
    }
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
Node *DeletionAtHead(Node *head)
{
    if (head == nullptr)
    {
        return nullptr;
    }
    Node *temp = head;
    head = temp->next;
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
    delete p;
    return head;
}
Node *DeletionAfterPosition(Node *head)
{
    if (head == nullptr)
    {
        return nullptr;
    }
    int pos;
    cout << "Enter the position after which you want to delete :";
    cin >> pos;
    cout << endl;
    if (pos < 0)
    {
        return head;
    }
    Node *temp = head;
    while (pos > 0 && temp != nullptr)
    {
        temp = temp->next;
        pos--;
    }
    if (temp == nullptr || temp->next == nullptr)
    {
        return head;
    }
    Node *p = temp->next;
    temp->next = p->next;
    p->next = nullptr;
    delete p;
    return head;
}
Node *DeletionAtPosition(Node *head)
{
    if (head == nullptr)
    {
        return nullptr;
    }
    int pos;
    cout << "Enter the position which you want to delete in a given linked list:";
    cin >> pos;
    cout << endl;
    if (pos < 0)
    {
        return head;
    }

    if (pos == 0)
    {
        Node *temp = head;
        head = head->next;
        temp->next = nullptr;
        delete temp;
        return head;
    }
    Node *temp = head;
    while (pos > 1 && temp != nullptr)
    {
        temp = temp->next;
        pos--;
    }
    if (temp == nullptr || temp->next == nullptr)
    {
        return head;
    }
    Node *p = temp->next;
    temp->next = p->next;
    p->next = nullptr;
    delete p;
    return head;
}
Node *DeletionBeforePosition(Node *head)
{
    if (head == nullptr)
    {
        return nullptr;
    }
    int pos;
    cout << "Enter the position before which you want to delete in a given linked list:";
    cin >> pos;
    cout << endl;
    if (pos <= 0)
    {
        return head;
    }
    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = nullptr;
        delete temp;
        return head;
    }
    Node *temp = head;
    while (pos > 2 && temp != nullptr)
    {
        temp = temp->next;
        pos--;
    }
    if (temp == nullptr || temp->next == nullptr)
    {
        return head;
    }
    Node *p = temp->next;
    temp->next = p->next;
    p->next = nullptr;
    delete p;
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
    head = DeletionAtHead(head);
    traverse(head);
    head = DeletionAtEnd(head);
    traverse(head);
    head = DeletionAfterPosition(head);
    traverse(head);
    head = DeletionAtPosition(head);
    traverse(head);
    head = DeletionBeforePosition(head);
    traverse(head);
    return 0;
}