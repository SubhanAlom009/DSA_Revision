#include <iostream>
#include <vector>
using namespace std;

int hashFunction(int key)
{
    int size = 10;
    int hash = key % size;

    return hash;
}

void insert(int H[], int key)
{
    int hashedIndex = hashFunction(key);

    H[hashedIndex] = key;
}

int search(int key)
{

    int hashedIndex = hashFunction(key);
    return hashedIndex;
}

int main()
{
    int H[10] = {0};

    insert(H, 5);
    insert(H, 1);
    insert(H, 2);
    insert(H, 10);

    cout << "required index: " << search(5) << endl;
    ;

    for (int i = 0; i <= 9; i++)
    {
        cout << H[i] << " ";
    }
}
