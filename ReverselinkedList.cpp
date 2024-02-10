#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node(int data)
    {
        value = data;
        next = NULL;
    }
};
class LinkedList
{
public:
    Node *head;
    LinkedList()
    {
        head = NULL;
    }
    // insert element in the linklist
    void insertAtTail(int value)
    {
        Node *new_node = new Node(value);
        if (head == NULL) // LinkedList is empty
        {
            head = new_node;
            return;
        }
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->value << "-";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};
Node *reverseLinkedlist(Node *&head)
{
    Node *prev = NULL;
    Node *curr_node = head;
    while (curr_node != NULL)
    {
        Node *next = curr_node->next;
        curr_node->next = prev;
        prev = curr_node;
        curr_node = next;
    }
    Node *new_head = prev;
    return new_head;
}
int main()
{
    LinkedList li;
    li.insertAtTail(1);
    li.insertAtTail(2);
    li.insertAtTail(3);
    li.insertAtTail(4);
    li.insertAtTail(5);
    li.insertAtTail(6);
    li.insertAtTail(7);
    li.display();
    li.head = reverseLinkedlist(li.head);
    li.display();
    return 0;
}