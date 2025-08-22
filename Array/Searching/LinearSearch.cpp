#include <iostream>
#include <vector>

using namespace std;

int linearSearch(vector<int> arr, int val)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == val)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};

    cout << linearSearch(arr, 5);
}