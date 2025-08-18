#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>

using namespace std;

class stack
{
public:
    int top = -1;
    int arr[10];

public:
    void push(int x)
    {
        if (top > 10)
            cout << "Stack overflow!";
        top = top + 1;
        arr[top] = x;
    }

    void pop()
    {
        if (top == -1)
            cout << "Stack underflow!";
        top = top - 1;
    }
    // top or peek
    int peek()
    {
        if (top == -1)
            cout << "stack is empty";

        return arr[top];
    }

    int size()
    {
        return top + 1;
    }

    bool isEmpty()
    {
        return top == -1;
    }
};

int main()
{
    stack st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top of the stack: " << st.peek() << endl;
    st.pop();
    cout << "Top after pop: " << st.peek() << endl;
    cout << "Size of stack: " << st.size() << endl;
}