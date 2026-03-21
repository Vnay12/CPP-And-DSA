/*
This is Singly Linked List code and basics operations:

1) Creating Node and LinkedList
2) Tranverse and print values
    - Iterative
    - Recursive
3) Insertion:
    - At start
    - At end
    - At specific position
        - After key value
        - Before key value
4) Delete:
    a) At Start
    b) At End
    c) At Specific Position
        - Before Key Value
        - After Key Value
    d) Delete Duplicates


 */

#include <bits/stdc++.h>
using namespace std;

// Defined Class for Linked List
class Node
{

public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

// Traverse of LinkedList
void traverseSLL(Node *head)
{
    while (head != NULL)
    {
        cout << head->value;
        if (head->next != NULL)
        {
            cout << "->";
        }
        head = head->next;
    }
    cout << endl;
}
/*
Approach: Tranverse SLL Interative Method
Time Complexity: O(N)
Space Complexity: O(1)
 */

// Traverse SLL Recurison
void tranverseSLLRecursion(Node *head)
{
    // Base Conditon
    if (head == NULL)
    {
        return;
    }
    cout << head->value;
    if (head->next != NULL)
    {
        cout << " -> ";
    }

    tranverseSLLRecursion(head->next);
}
/*
Approach: Tranverse LinkedList Recursion
Time Complexity: O(N)
Space Complexity: O(N)
 */

// Printing SLL
void printSLL(Node *head)
{
    while (head != NULL)
    {
        cout << head->value;
        if (head->next != NULL)
        {
            cout << " -> ";
        }
        head = head->next;
    }
}
/*
Approach: Printing SLL
Time Complexity: O(N)
Space Complexity: O(1)
 */

// Insert At Begin
Node *insertAtBeginSLL(Node *head, int data)
{
    Node *curr = new Node(data);
    if (head == NULL)
    {
        return curr;
    }
    else
    {
        curr->next = head;
    }
    return curr;
}
/*
Approach: Insert At Begin SLL
Time Complexity: O(1)
Space Complexity: O(1)

Bound Check: if first element is null then we have if condition to check
 */

// Insert at end
Node *insertAtEndSLL(Node *head, int data)
{
    Node *newnode = new Node(data);
    Node *p = head;
    if (head == NULL)
    {
        return newnode;
    }
    else
    {
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = newnode;
    }
    return head;
}
/*
 Approach: Insert At End
 Time Complexity: O(N)
 Space Complexity: o(1)
  */

Node *insertBeforeKey(Node *head, int data, int key)
{
    Node *newnode = new Node(data);
    Node *p = head;
    if (p == NULL)
    {
        cout << "Linked List is Empty, Cannot insert before key" << endl;
        return head;
    }

    if (p->value == key)
    {
        newnode->next = head;
        return newnode;
    }
    else
    {
        while (p->next != NULL && p->next->value != key)
        {
            p = p->next;
        }
        if (p->next == NULL)
        {
            cout << "Key was not Found" << endl;
        }
        else
        {
            newnode->next = p->next;
            p->next = newnode;
        }
    }
    return head;
}
/*
Approach: Insert Before Key
Time Complexity: O(N)
Space Complexity: O(1)
 */

// Insert after Key
Node *insertAfterKey(Node *head, int data, int key)
{
    Node *newnode = new Node(data);
    Node *p = head;
    if (p == NULL)
    {
        cout << "LinkedList is empty, cannot be insert after key element" << endl;
    }

    if (p->value == key)
    {
        p->next = newnode;
        return head;
    }
    else
        while (p != NULL && p->value != key)
        {
            p = p->next;
        }
    if (p == NULL)
    {
        cout << "Key element was not found " << endl;
        return head;
    }
    else
    {

        newnode->next = p->next;
        p->next = newnode;
    }
    return head;
}
/*
Approach: Insert After Key
Time Complexity: O(N)
Space Complexity: O(1)
 */

// Delete at Begin
Node *deleteAtFirst(Node *head)
{
    Node *p = head;
    if (p == NULL)
    {
        return NULL;
    }

    if (p->next == NULL)
    {
        delete head;
        return NULL;
    }

    head = head->next;
    delete p;
    return head;
}
/*
Approach: Delete at first
Time Complexity: O(1)
Space Complexity: O(1)
 */

// Delete at Last
Node *deleteAtLast(Node *head)
{
    Node *p = head;
    if (p == NULL)
    {
        return NULL;
    }

    if (p->next == NULL)
    {
        delete head;
        return NULL;
    }

    while (p->next->next != NULL)
    {
        p = p->next;
    }
    delete p->next;
    p->next = NULL;

    return head;
}
/*
Approach: Delete at Last
Time Complexity: O(N)
Space Complexity: O(1)
 */

int main()
{

    // Creating Node and Linked List
    Node *head = new Node(5);
    head->next = new Node(6);
    head->next->next = new Node(7);

    // traverseSLL(head);
    tranverseSLLRecursion(head);

    // Insert At Begin
    cout << endl;
    head = insertAtBeginSLL(head, 4);
    printSLL(head);

    // Insert At End
    cout << endl;
    head = insertAtEndSLL(head, 8);
    printSLL(head);

    // Insert Before Key
    cout << endl;
    head = insertBeforeKey(head, 6, 7);
    printSLL(head);

    // Insert After Key
    cout << endl;
    head = insertAfterKey(head, 9, 8);
    printSLL(head);

    // Delete At first
    cout << endl;
    head = deleteAtFirst(head);
    printSLL(head);

    // Delete At End
    cout << endl;
    head = deleteAtLast(head);
    printSLL(head);
}
