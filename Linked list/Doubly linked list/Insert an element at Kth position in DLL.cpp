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

Node *InsertKthPos(Node *head, int pos, int val)
{
    if (head == NULL)
        return NULL;

    Node *temp = new Node(val);
    Node *mover = head;

    if (pos == 1)
    {
        temp->next = head;
        if (head != NULL)
            head->prev = temp;
        head = temp;
        return head;
    }

    for (int i = 1; i < pos && mover != NULL; i++)
    {
        mover = mover->next;
    }
    temp->next = mover->next;
    temp->prev = mover;
    if (mover->next != NULL)
        mover->next->prev = temp;
    mover->next = temp;

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
    head = InsertKthPos(head, 2, 3);
    Display(head);

    return 0;
}