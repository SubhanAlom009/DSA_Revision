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

class queue
{
public:
    Node *front;
    Node *rear;
    int queueSize;

    queue()
    {
        front = nullptr;
        rear = nullptr;
        queueSize = 0;
    }

    void enqueue(int x)
    {
        Node *temp = new Node(x);
        if (rear == NULL && front == NULL)
        {
            front = rear = temp;
            queueSize++;
            return;
        }
        rear->next = temp;
        rear = temp;
        queueSize++;
    }

    void dequeue()
    {
        if (front == NULL)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        Node *temp = front;
        front = front->next;
        delete temp;
        queueSize--;
    }

    int top()
    {
        if (front == nullptr)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return front->data;
    }

    int size()
    {
        return queueSize;
    }
};

int main()
{
    queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Top of the Queue: " << q.top() << endl;
    q.dequeue();
    cout << "Top after dequeue: " << q.top() << endl;
    cout << "Size of Queue: " << q.size() << endl;
}