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

void SelectionSort(vector<int> &arr)
{
    int i, j, k;

    for (i = 0; i < arr.size() - 1; i++)
    {
        j = k = i;
        while (j < arr.size() - 1)
        {
            if (arr[j] < arr[k])
            {
                k = j;
            }
            j++;
        }
        swap(&arr[k], &arr[i]);
    }
}

int main()
{
    vector<int> arr = {5, 2, 1, 6, 7};

    SelectionSort(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}