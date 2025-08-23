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

void BubbleSort(vector<int> &arr)
{
    int i, j;
    for (i = 0; i < arr.size() - 1; i++) // outer loop is for iteratiom
    {
        int swapped = false;
        for (j = 0; j < arr.size() - 1 - i; j++) // inner loop is for actual comparison
        {
            if (arr[j + 1] < arr[j])
            {
                swap(&arr[j + 1], &arr[j]);
                swapped = true;
            }
        }
        if (swapped == false)
            return;
    }
}

int main()
{
    vector<int> arr = {5, 2, 1, 6, 7};

    BubbleSort(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}