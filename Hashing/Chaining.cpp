#include <iostream>
#include <vector>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

class HashTable
{
    node *HT[10];

public:
    HashTable()
    {
        int i = 0;
        while (i < 10)
        {
            HT[i] = nullptr;
            i++;
        }
    }

    int hashFunction(int key)
    {
        return key % 10;
    }

    void insert(int key)
    {
        node *new_node = new node(key);

        int hashedIndex = hashFunction(key);
        new_node->next = HT[hashedIndex]; // insert at beginning of linked list
        HT[hashedIndex] = new_node;
    }

    bool search(int key)
    {
        int hashedIndex = hashFunction(key);

        node *temp = HT[hashedIndex];
        while (temp != nullptr)
        {
            if (temp->data == key)
            {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

    void display()
    {
        for (int i = 0; i < 10; i++)
        {
            cout << i << ":";
            node *temp = HT[i];
            while (temp != nullptr)
            {
                cout << temp->data << "->";
                temp = temp->next;
            }
            cout << "NULL" << endl;
        }
    }
};

int main()
{
    HashTable ht;

    ht.insert(5);
    ht.insert(15);
    ht.insert(25);
    ht.insert(35);

    cout << (ht.search(25) ? "Found 25" : "Not Found 25") << endl;
    cout << (ht.search(99) ? "Found 99" : "Not Found 99") << endl;

    ht.display();
}
