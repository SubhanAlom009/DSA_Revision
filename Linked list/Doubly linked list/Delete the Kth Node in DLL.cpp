#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};

Node *ArrToDLL(vector<int> arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        temp->next = mover->next;
        temp->prev = mover;
        mover->next = temp;
        mover = temp;
    }
    return head;
}

Node *DeleteKthNode(Node *head, int pos)
{
    if (head == NULL)
        return NULL;

    Node *temp = head;

    for (int i = 1; i < pos && temp != NULL; i++)
    {
        temp = temp->next;
    }
    // if pos is out of bound
    if (temp == NULL)
        return head;

    // if head is the only node
    if (temp == head)
    {
        head = head->next;
        if (head != NULL)
            head->prev = NULL;
        delete temp;
        return head;
    }

    temp->prev->next = temp->next;
    if (temp->next)
        temp->next->prev = temp->prev;
    delete temp;

    return head;
}

void Display(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "<->";
        temp = temp->next;
    }
    cout << "NULL";
}

int main()
{

    vector<int> arr = {2, 6, 4, 8};
    Node *head = ArrToDLL(arr);
    head = DeleteKthNode(head, 2);
    Display(head);

    return 0;
}