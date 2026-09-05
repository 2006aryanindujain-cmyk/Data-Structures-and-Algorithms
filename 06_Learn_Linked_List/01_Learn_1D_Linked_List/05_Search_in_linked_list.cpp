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
bool search(Node *head, int key)
{
    Node *temp = head;
    while (temp)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
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
    int key;
    cout << "Enter element to search: ";
    cin >> key;
    if (search(head, key))
    {
        cout << "Element found";
    }
    else
    {
        cout << "element not found";
    }
    return 0;
}

// ======================= TEMPLATES IN C++ =======================
//
// Normally, if we write:
//
//     class Node
//     {
//         int data;
//     };
//
// then 'data' can store only int values.
//
// If we want the same Node class to work with different data types
// (int, string, double, char, etc.), we can use a CLASS TEMPLATE.
//
// -----------------------------------------------------------------
//
// 1. What is T?
//
// 'T' is a placeholder for a data type.
//
//     template <typename T>
//
// means:
//     "The data type will be decided later."
//
// T does NOT mean a specific data type.
// It can become int, string, double, char, etc.
//
// -----------------------------------------------------------------
//
// 2. Generic Node class:
//
//     template <typename T>
//     class Node
//     {
//     public:
//         T data;
//         Node<T>* next;
//
//         Node(T data1)
//         {
//             data = data1;
//             next = nullptr;
//         }
//     };
//
// Here:
//     T data       → Node can store any data type
//     Node<T>*     → pointer to another Node of the same data type
//
// -----------------------------------------------------------------
//
// 3. How T gets its actual type:
//
//     Node<int> n1(10);
//
// Here T becomes int.
//
// So it is effectively:
//
//     int data;
//
//
//
//     Node<string> n2("Aryan");
//
// Here T becomes string.
//
// So it is effectively:
//
//     string data;
//
//
//
//     Node<double> n3(3.14);
//
// Here T becomes double.
//
// So it is effectively:
//
//     double data;
//
// -----------------------------------------------------------------
//
// 4. Why do we write Node<T>* instead of Node*?
//
// Because Node itself is now a template.
//
//     Node<int>     → Node whose data is int
//     Node<string>  → Node whose data is string
//
// Therefore the next pointer must also point to the same type:
//
//     Node<T>* next;
//
// For example, if T = int:
//
//     Node<int>* next;
//
// If T = string:
//
//     Node<string>* next;
//
// -----------------------------------------------------------------
//
// 5. Important syntax:
//
//     template <typename T>
//     class Node
//     {
//         T data;
//     };
//
// 'template <typename T>' tells the compiler that T is a
// type parameter.
//
// -----------------------------------------------------------------
//
// 6. Why use templates?
//
// Without template:
//
//     class Node
//     {
//         int data;
//     };
//
// Only int can be stored.
//
// With template:
//
//     template <typename T>
//     class Node
//     {
//         T data;
//     };
//
// The same class can work with:
//     int
//     string
//     double
//     char
//     etc.
//
// So templates provide GENERIC / REUSABLE CODE.
//
// -----------------------------------------------------------------
//
// 7. Easy way to remember:
//
//     int → "I have already decided the data type."
//
//     T   → "I will decide the data type later."
//
//     Node<int>    → T = int
//     Node<string> → T = string
//     Node<double> → T = double
//
// -----------------------------------------------------------------
//
// IMPORTANT:
// T is NOT a variable.
// T is a TYPE PARAMETER / PLACEHOLDER for a data type.
//
// This concept is called:
//     → Templates
//     → Class Templates
//     → Generic Programming
//
// ================================================================