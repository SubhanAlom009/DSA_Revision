#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int secondLargestElement(vector<int> A)
{
    int largest = A[0];
    int second_largest = INT_MIN;

    for (auto i = 1; i < A.size(); i++)
    {
        if (A[i] > largest)
        {
            second_largest = largest;
            largest = A[i];
        }
        else if (A[i] < largest && A[i] > second_largest)
        {
            second_largest = A[i];
        }
    }

    return second_largest;
}

int main()
{

    vector<int> A = {1, 3, 2, 4, 6, 5};

    cout << secondLargestElement(A);
}