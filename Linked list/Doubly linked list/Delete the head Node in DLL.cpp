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

Node *DeleteHead(Node *head)
{
    if (head == NULL)
        return NULL;

    // if only 1 node
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }

    Node *temp = head;
    head = head->next;
    head->prev = NULL;
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
    head = DeleteHead(head);
    Display(head);

    return 0;
}