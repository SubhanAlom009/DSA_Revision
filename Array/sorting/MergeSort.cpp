#include <iostream>
#include <vector>
using namespace std;

void Merge(vector<int> &arr, int l, int mid, int h)
{
    int i = l, j = mid + 1;
    vector<int> arr1;

    // Merge two halves
    while (i <= mid && j <= h)
    {
        if (arr[i] < arr[j])
        {
            arr1.push_back(arr[i]);
            i++;
        }
        else
        {
            arr1.push_back(arr[j]);
            j++;
        }
    }

    // Copy remaining elements
    while (i <= mid)
    {
        arr1.push_back(arr[i]);
        i++;
    }
    while (j <= h)
    {
        arr1.push_back(arr[j]);
        j++;
    }

    // Copy merged data back to arr
    for (int k = l; k < arr1.size(); k++)
    {
        arr[k] = arr1[k];
    }
}

void MergeSort(vector<int> &arr, int l, int h)
{
    if (l < h)
    {
        int mid = (l + h) / 2;
        MergeSort(arr, l, mid);
        MergeSort(arr, mid + 1, h);
        Merge(arr, l, mid, h);
    }
}

int main()
{
    vector<int> arr = {5, 2, 1, 6, 7};

    MergeSort(arr, 0, arr.size() - 1);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
