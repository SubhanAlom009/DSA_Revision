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

class stack
{
public:
    Node *top;
    int size;

public:
    stack()
    {
        top = nullptr;
        size = 0;
    }

    void push(int x)
    {
        Node *temp = new Node(x);
        temp->next = top;
        top = temp;
        size = size + 1;
    }

    void pop()
    {

        if (top == NULL)
        {
            cout << "Stack underflow!" << endl;
            return;
        }

        Node *temp;
        temp = top;
        top = top->next;
        size = size - 1;
    }

    int topData()
    {
        if (top == NULL)
        {
            cout << "Stack underflow!" << endl;
            return -1;
        }
        return top->data;
    }

    int stackSize()
    {
        return size;
    }
    int isEmpty()
    {
        return top == NULL;
    }
};

int main()
{
    stack st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top of the stack: " << st.topData() << endl;
    st.pop();
    cout << "Top after pop: " << st.topData() << endl;
    cout << "Size of stack: " << st.stackSize() << endl;
}