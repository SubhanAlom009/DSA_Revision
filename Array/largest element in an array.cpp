#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int largestElement(vector<int> A, int n)
{
    int largest = A[0];

    for (int i = 1; i < n - 1; i++)
    {
        if (A[i] > largest)
        {
            largest = A[i];
        }
    }

    return largest;
}

int main()
{

    vector<int> A = {1, 3, 2, 4, 6, 5};

    cout << largestElement(A, 6);
}