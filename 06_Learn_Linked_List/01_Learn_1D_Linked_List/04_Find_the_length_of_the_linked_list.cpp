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
int main()
{
    vector<int> arr = {1, 2, 3, 4};
    Node *head = new Node(arr[0]);
    Node *temp = head;
    Node *newnode = nullptr;
    for (int i = 1; i < arr.size(); i++)
    {
        newnode = new Node(arr[i]);
        temp->next = newnode;
        temp = newnode;
    }
    temp = head;
    int count = 0;
    while (temp != nullptr)
    {
        count++;
        temp = temp->next;
    }
    cout << "Length of a linked list is " << count << endl;
    return 0;
}