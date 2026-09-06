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
Node *InsertionBeforeHead(Node *head)
{
    int k;
    cout << "Enter the value to be inserted before head: ";
    cin >> k;
    Node *temp = new Node(k, nullptr, head);
    if (head != nullptr)
    {
        head->prev = temp;
    }
    return temp;
}
Node *InsertionBeforeTail(Node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return InsertionBeforeHead(head);
    }
    int k;
    cout << "Enter the value to be inserted before tail: ";
    cin >> k;
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    Node *prev = temp->prev;
    Node *newnode = new Node(k, prev, temp);
    prev->next = newnode;
    temp->prev = newnode;
    return head;
}
Node *InsertionBeforeKthElement(Node *head)
{
    int k;
    cout << "Enter the position before which you want to insert: ";
    cin >> k;
    if (k <= 0)
    {
        return head;
    }
    if (k == 1)
    {
        return InsertionBeforeHead(head);
    }
    int val;
    cout << "Enter the value to be inserted: ";
    cin >> val;
    Node *temp = head;
    int count = 0;
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
    Node *newnode = new Node(val, prev, temp);
    prev->next = newnode;
    temp->prev = newnode;
    return head;
}
void InsertionBeforeNode(Node *temp)
{
    if (temp == nullptr || temp->prev == nullptr)
    {
        return;
    }
    int val;
    cout << "Enter the value to be inserted before the given node: ";
    cin >> val;
    Node *prev = temp->prev;
    Node *newnode = new Node(val, prev, temp);
    prev->next = newnode;
    temp->prev = newnode;
}
Node *InsertionAfterHead(Node *head)
{
    if (head == nullptr)
    {
        return head;
    }
    int val;
    cout << "Enter the value to be inserted after head: ";
    cin >> val;
    Node *next = head->next;
    Node *newnode = new Node(val, head, next);
    head->next = newnode;
    if (next != nullptr)
    {
        next->prev = newnode;
    }
    return head;
}
Node *InsertionAfterTail(Node *head)
{
    if (head == nullptr)
    {
        return InsertionBeforeHead(head);
    }
    int val;
    cout << "Enter the value to be inserted after tail: ";
    cin >> val;
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    Node *newnode = new Node(val, temp, nullptr);
    temp->next = newnode;
    return head;
}
Node *InsertionAfterKthElement(Node *head)
{
    int k;
    cout << "Enter the position after which you want to insert: ";
    cin >> k;
    if (k <= 0)
    {
        return head;
    }
    int val;
    cout << "Enter the value to be inserted: ";
    cin >> val;
    Node *temp = head;
    int count = 0;
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
    Node *next = temp->next;
    Node *newnode = new Node(val, temp, next);
    temp->next = newnode;
    if (next != nullptr)
    {
        next->prev = newnode;
    }
    return head;
}
void InsertionAfterNode(Node *temp)
{
    if (temp == nullptr)
    {
        return;
    }
    int val;
    cout << "Enter the value to be inserted after the given node: ";
    cin >> val;
    Node *next = temp->next;
    Node *newnode = new Node(val, temp, next);
    temp->next = newnode;
    if (next != nullptr)
    {
        next->prev = newnode;
    }
}
int main()
{
    int n;
    cout << "Enter the vector size: ";
    cin >> n;
    vector<int> arr;
    int value;
    cout << "Enter the elements in the vector: ";
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        arr.push_back(value);
    }
    Node *head = Array2DoublyLL(arr);
    cout << "\nOriginal Doubly Linked List: ";
    traversal(head);
    cout << "\n--- Insertion Before Head ---\n";
    head = InsertionBeforeHead(head);
    cout << "List after insertion: ";
    traversal(head);
    cout << "\n--- Insertion Before Tail ---\n";
    head = InsertionBeforeTail(head);
    cout << "List after insertion: ";
    traversal(head);
    cout << "\n--- Insertion Before Kth Element ---\n";
    head = InsertionBeforeKthElement(head);
    cout << "List after insertion: ";
    traversal(head);
    cout << "\n--- Insertion Before Given Node ---\n";
    if (head != nullptr && head->next != nullptr)
    {
        Node *temp = head->next;
        InsertionBeforeNode(temp);
        cout << "List after insertion: ";
        traversal(head);
    }
    else
    {
        cout << "Given node is not available for insertion." << endl;
    }
    cout << "\n--- Insertion After Head ---\n";
    if (head != nullptr)
    {
        head = InsertionAfterHead(head);

        cout << "List after insertion: ";
        traversal(head);
    }
    else
    {
        cout << "Head is not available for insertion." << endl;
    }
    cout << "\n--- Insertion After Tail ---\n";
    head = InsertionAfterTail(head);
    cout << "List after insertion: ";
    traversal(head);
    cout << "\n--- Insertion After Kth Element ---\n";
    head = InsertionAfterKthElement(head);
    cout << "List after insertion: ";
    traversal(head);
    cout << "\n--- Insertion After Given Node ---\n";
    if (head != nullptr && head->next != nullptr)
    {
        Node *temp = head->next;
        InsertionAfterNode(temp);

        cout << "List after insertion: ";
        traversal(head);
    }
    else
    {
        cout << "Given node is not available for insertion." << endl;
    }
    return 0;
}