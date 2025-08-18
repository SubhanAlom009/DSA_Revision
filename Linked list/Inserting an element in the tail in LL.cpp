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

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node *arrToLL(vector<int> arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

Node *InsertTail(Node *head, int el)
{

    Node *mover = head;
    Node *temp = new Node(el);

    if (head == NULL)
        return temp;
    while (mover->next != NULL)
    {
        mover = mover->next;
    }
    mover->next = temp;

    return head;
}

void Display(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main()
{

    vector<int> arr = {3, 4, 6, 8};

    Node *head = arrToLL(arr);

    head = InsertTail(head, 1);
    Display(head);

    return 0;
}