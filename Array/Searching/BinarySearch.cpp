#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> arr, int val)
{
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == val)
            return mid;
        else if (arr[mid] > val)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};

    cout << binarySearch(arr, 5);
}