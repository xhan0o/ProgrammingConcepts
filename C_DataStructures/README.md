# Data Structures in C

## Array
An array is collection of items stored in continuous memory locations. The basic intention of datatype is declaring multiple items of same datatype together.
1. It is possible to have array of all the datatypes except Void and functions.
2. Arrays are passed as pointer to functions.
3. Array and pointers are different.
4. Array initialized with "StringInside" has last element '\0'
5. Dynamically allocated arrays are allocated in memory of heap, static or global array are allocated in data segment and local arrays are on stack segment.

## Linked list
Advantages over array.
1. Dynamic size
2. Ease of insertion / Deletion
Drawbacks.
1. Random access not allowed.
2. Extra memory for pointer required. (node->next)
3. Not cache friendly as memory locations aren't continuous.
### Types of Linked List
1. Singly
2. Circular
3. Doubly
### Functions
Insert Node(At head, Middle and end), Delete Node
## Stack
Stacks are linear data structure which follows a particular order in which the operations are performed.
### Types of Stack
1. First in Last out
2. Last in first out
### Functions
Push, Pop, isEmpty, Peek
Stack can be implemented in C using Array and Linked list both. The idea of implementation will be same

## Tree
To store data in form of hierarchy.
Moderate insert and delete, Quicker than arrays and slower than unsorted linkedlist.
Like linkedList and unlike arrays, trees dont have upper limit on number of nodes.
### Binary tree
Each element in btree can have 2 children only. Left and right.
Contains 3 parts
1. data
2. pointer to left children
3. pointer to right children
### Binary search tree
left sub tree only Contains node with data lesser than node's data
right sub tree only contains node with data greater than node's data
Sub-tree must also fulfill this condition, with no duplicate nodes.
Printing BST in-order gives you ascending sorted values.
