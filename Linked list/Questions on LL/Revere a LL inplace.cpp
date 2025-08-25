#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

node *reverseLL(node *head)
{
    node *prev = nullptr;
    node *current = head;

    while (current != nullptr)
    {
        node *temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
    }
    head = prev;

    return head;
}

void display(node *head)
{
    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}

int main()
{
    node *head = new node(5);
    node *nd1 = new node(10);
    head->next = nd1;
    node *nd2 = new node(15);
    nd1->next = nd2;
    node *nd3 = new node(20);
    nd2->next = nd3;

    head = reverseLL(head);
    display(head);
}
