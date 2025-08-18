#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isSorted(vector<int> A)
{
    for (int i = 1; i < A.size(); i++)
    {
        if (A[i] < A[i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{

    vector<int> A = {1, 2, 3, 4, 5, 6};

    cout << isSorted(A);
}