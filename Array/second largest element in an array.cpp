#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int secondLargestElement(vector<int> A, int n)
{
    int largest = A[0];
    int secondlargest = INT_MIN;

    for (int i = 1; i < A.size(); i++)
    {
        if (A[i] > largest)
        {
            largest = A[i];
        }
    }

    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] > secondlargest && A[i] != largest)
        {
            secondlargest = A[i];
        }
    }

    return secondlargest;
}

int main()
{

    vector<int> A = {1, 3, 2, 4, 6, 5};

    cout << secondLargestElement(A, 6);
}