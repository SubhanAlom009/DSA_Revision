#include <iostream>
#include <vector>
using namespace std;

// basic hash function
int PrimaryHashFunction(int key)
{
    int size = 10;
    int hash = key % size;

    return hash;
}

int SecondaryHashFunction(int key)
{
    int hash = 7 - (key % 7);

    return hash;
}

int DoubleHashing(int H[], int key)
{

    int h1 = PrimaryHashFunction(key);
    int h2 = SecondaryHashFunction(key);

    int i = 0;
    while (H[(h1 + i * h2) % 10] != 0)
        i++;
    return (h1 + i * h2) % 10;
}

void insert(int H[], int key)
{
    int hashedIndex = DoubleHashing(H, key);

    H[hashedIndex] = key;
}
int search(int H[], int key)
{

    int h1 = PrimaryHashFunction(key);
    int h2 = SecondaryHashFunction(key);

    int i = 0;
    while (H[(h1 + i * h2) % 10] != key)
        i++;
    return (h1 + i * h2) % 10;
}
int main()
{
    int H[10] = {0};

    insert(H, 5);
    insert(H, 25);
    insert(H, 15);
    insert(H, 35);
    insert(H, 95);

    cout << "required index: " << search(H, 25) << endl;

    for (int i = 0; i <= 9; i++)
    {
        cout << H[i] << " ";
    }
}
