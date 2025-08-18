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

Node *InsertBeforeTail(Node *head, int val)
{
    if (head == NULL)
        return NULL;

    Node *temp = new Node(val);
    // if head is the only node - special case
    if (head->next == NULL)
    {
        head->prev = temp;
        temp->next = head;
        head = temp;
        return head;
    }

    Node *mover = head;
    while (mover->next != NULL)
    {
        mover = mover->next;
    }
    temp->next = mover;
    temp->prev = mover->prev;
    mover->prev->next = temp;
    mover->prev = temp;

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
    head = InsertBeforeTail(head, 3);
    Display(head);

    return 0;
}