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

int Partition(vector<int> &arr, int l, int h)
{
    int i = l, j = h;
    int pivot = arr[l];

    while (i < j)
    {
        while (arr[i] <= pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i < j)
        {
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[l], &arr[j]);
    return j;
}

void QuickSort(vector<int> &arr, int l, int h)
{
    int j;
    if (l < h)
    {
        j = Partition(arr, l, h);
        QuickSort(arr, l, j - 1);
        QuickSort(arr, j + 1, h);
    }
}

int main()
{
    vector<int> arr = {5, 2, 1, 6, 7};

    QuickSort(arr, 0, arr.size() - 1);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
