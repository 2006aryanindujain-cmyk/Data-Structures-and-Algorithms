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
    return 0;
}