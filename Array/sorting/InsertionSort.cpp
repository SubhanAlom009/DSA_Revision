#include <iostream>
#include <vector>

using namespace std;

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void InsertionSort(vector<int> &arr)
{
    int i, j;

    for (i = 1; i < arr.size(); i++)
    {
        int key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    vector<int> arr = {5, 2, 1, 6, 7};

    InsertionSort(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}