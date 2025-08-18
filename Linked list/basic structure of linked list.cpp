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

int main()
{

    vector<int> arr = {3, 4, 6, 8};
    Node *y = new Node(arr[0]);

    cout << y->data;

    return 0;
}