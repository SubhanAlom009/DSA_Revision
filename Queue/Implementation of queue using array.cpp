#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>

using namespace std;

class queue
{
public:
    int front = -1;
    int rear = -1;
    int q[10];

public:
    void enqueue(int x)
    {
        if (rear >= 9)
        {
            cout << "Queue overflow!" << endl;
            return;
        }
        if (front == -1)
            front = 0;
        rear++;
        q[rear] = x;
    }

    void dequeue()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue underflow!" << endl;
            return;
        }
        front++;
    }

    int peek()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return q[front];
    }

    int size()
    {
        if (front > rear)
            return 0;
        return rear - front + 1;
    }

    bool isEmpty()
    {
        return (front == -1 || front > rear);
    }
};

int main()
{
    queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Top of the Queue: " << q.peek() << endl;
    q.dequeue();
    cout << "Top after dequeue: " << q.peek() << endl;
    cout << "Size of Queue: " << q.size() << endl;
}