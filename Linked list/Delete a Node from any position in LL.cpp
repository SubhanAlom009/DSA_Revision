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

Node *DeleteKthNode(Node *head, int k)
{

    Node *temp = head;
    Node *prev = NULL;

    if (head == NULL)
        return head;
    if (k == 1)
    {
        head = head->next;
        delete temp;
        return head;
    }
    for (int i = 1; i < k && temp != NULL; i++)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) // if K is greater then length
        return head;
    prev->next = temp->next;
    delete temp;
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

    head = DeleteKthNode(head, 2);
    Display(head);

    return 0;
}