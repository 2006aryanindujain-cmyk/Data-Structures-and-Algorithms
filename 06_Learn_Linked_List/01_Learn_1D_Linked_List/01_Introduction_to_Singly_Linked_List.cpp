// A linked list is a data structure containing two crucial pieces of information, the first being
// the data and the other being the pointer to the next element. The ‘head’ is the first node, and
// the ‘tail’ is the last node in a linked list.

// Applications of Linked Lists:
// -> Creating Data Structures: Linked lists serve as the foundation for building other dynamic
//                              data structures, such as stacks and queues.
// -> Dynamic Memory Allocation: Dynamic memory allocation relies on linked lists to manage and
//                               allocate memory blocks efficiently.
// -> Web Browser is one important application of Linked List.

// Classes in C++ :-
// -> A class is a self-defined data type that contains data members and member functions.
// -> Data members are the data variables and member functions are the functions used to manipulate these variables.
// -> An object, in turn, is an instance of a class, with its behavior defined by the combination of data variables
//    and member functions within the class.
// -> A class can be defined using the keyword ‘class’ followed by the name of the class. The body of the class is
//    defined inside the curly brackets and closed by a semicolon at the end.
// -> There are mainly three types of access modifiers: public and private and protected.
//    Public :- It can accessed in any class of our code.
//    Private :- It can be accessed only within the class in which it is defined.
//    Protected :- It is the same as private, with the only difference being that it can be accessed in any subclass of that class.
// -> Data Members contain the data variables and can be accessed by the object depending on the access modifier.
// -> Member Functions are the different ways to access the data variables. We can define member functions in two ways :-
//    Inside Class :- When it is used within the class in which it is defined.
//    Outside Class :- When it is used outside the class in which it is defined. One important point to note is that
//                   we must use scope resolution :: operator for outside class member functions.
// ->There are two types of special member functions :-
//   Constructors :- These are called by the compiler every time an object of the class is used.
//                 There are three types of Constructors: Default Constructor, Parameterized Constructor, and Self Constructor.

// Structures in C++ :-
// -> Structures and classes in C++ differ because classes offer features like inheritance and polymorphism,
//    while structures do not. Structures are used to group several different data types into one type. It also
//    contains data members and member functions just like class and is declared using the keyword ‘struct’.
// -> structs are public by default, whereas in the case of a class, objects of a class are private by default.

// Member functions and data types :- Both can store data and perform functions and operations on the data stored.
// Encapsulation :- Both can hide or show the data and functions depending on the situation.
// Polymorphism, Inheritance, and Abstraction: are fundamental concepts developed for object-oriented programming
//                                             that are not supported by structures but are with classes.
// Access Modifier: Even though default structures are defined as public and classes are defined as private,
//                  choosing an access specifier according to your need can change the default parameters.
// Constructor and Destructor: Both can use these types of member functions.

// Creating a Linked List :-
// #include <bits/stdc++.h>
// using namespace std;
// struct node
// {
//     int data;
//     struct node *next;
// };
// int main()
// {
//     int n;
//     cout << "Enter the number of noders you want to create:";
//     cin >> n;
//     struct node *head = nullptr, *temp = nullptr, *newnode;
//     for (int i = 0; i < n; i++)
//     {
//         newnode = new node;
//         int data;
//         cout << "Enter the data:";
//         cin >> data;
//         newnode->data = data;
//         if (head == nullptr)
//         {
//             head = newnode;
//             temp = newnode;
//         }
//         else
//         {
//             temp->next = newnode;
//             newnode->next = nullptr;
//         }
//     }
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int data1, Node *next1)
//     {
//         data = data1;
//         next = next1;
//     }
//     Node(int data1)
//     {
//         data = data1;
//         next = nullptr;
//     }
// };
// int main()
// {
//     vector<int> v = {0, 2, 4, 6, 8};
//     Node *y = new Node(v[0]);
//     cout << y << endl;
//     cout << y->data << endl;
//     Node *z = new Node(v[1], y);
//     cout << z->data << endl;
//     cout << z->next << endl;
//     return 0;
// }

// A new keyword is used to dynamically allocate memory to a node with data as arr[0].
// There is a constructor which assigns the values to a new node.
// The class has two data types: data which contains the value of the node and a pointer next,
// which points to the next node in the list.

// Pointers :-
// -> A pointer is a variable that stores the memory address of another variable. In simpler terms,
//    it "points" to the location in memory where data is stored. This allows you to indirectly access
//    and manipulate data by referring to its memory address.
// -> A node refers to the structure that contains data and the pointer to the next node. In contrast,
//    Node* (Node pointer) specifically denotes a pointer variable that stores the address of the Node it is pointing to.

// Types of Linked Lists :-
// 1.Singly Linked Lists :- In a singly linked list, each node points to the next node in the sequence. Traversal is
//                        straightforward but limited to moving in one direction, from the head to the tail.
// 2.Doubly Linked Lists :- In this each node points to both the next node and the previous node, thus allowing
//                          it for bidirectional connectivity.
// 3.Circular Linked Lists :- In a circular linked list, the last node points back to the head node, forming a closed loop.

// Memory Space in Linked List:
//
// In an array:
// → Only data is stored.
// → int = 4 bytes.
//
// In a linked list:
// → Each node stores:
//      1. Data (int) = 4 bytes
//      2. Pointer (next) = address of next node
//
// 32-bit system:
// → int = 4 bytes
// → Pointer = 4 bytes
// → Total per node = 8 bytes
//
// 64-bit system:
// → int = 4 bytes
// → Pointer = 8 bytes
// → Total per node = 12 bytes
//
// Therefore, linked list nodes generally consume more memory
// than an array because they also store a pointer.
//
// Note: Actual memory occupied by a Node can differ due to
//       memory alignment/padding.

// convert array into linked list and traversal in linked list :-
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
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}