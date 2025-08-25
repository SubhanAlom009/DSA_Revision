#include <iostream>
#include <vector>
using namespace std;

// basic hash function
int hashFunction(int key)
{
    int size = 10;
    int hash = key % size;

    return hash;
}

int QuadraticProbe(int H[], int key)
{

    int hashedIndex = hashFunction(key);

    int i = 0;
    while (H[(hashedIndex + i * i) % 10] != 0)
        i++;
    return (hashedIndex + i * i) % 10;
}

void insert(int H[], int key)
{
    int hashedIndex = QuadraticProbe(H, key);

    H[hashedIndex] = key;
}
int search(int H[], int key)
{

    int hashedIndex = hashFunction(key);

    int i = 0;
    while (H[(hashedIndex + i * i) % 10] != key)
        i++;
    return (hashedIndex + i * i) % 10;
}
int main()
{
    int H[10] = {0};

    insert(H, 5);
    insert(H, 15);
    insert(H, 25);
    insert(H, 35);

    cout << "required index: " << search(H, 25) << endl;

    for (int i = 0; i <= 9; i++)
    {
        cout << H[i] << " ";
    }
}
