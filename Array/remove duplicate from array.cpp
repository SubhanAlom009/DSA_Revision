#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

// using set - brute force
int RemoveDuplicate(vector<int> &A) // we can use A (pass by value) or &A (pass by reference - recommended)
{
    set<int> s(A.begin(), A.end());

    A.clear();
    for (auto num : s)
    {
        A.push_back(num);
    }
    return A.size(); // it tells if the size has changed... u can print the values too
}

// Optimal - two pointer
int RemoveDuplicate2(vector<int> &A)
{
    int i = 0;
    for (int j = 1; j < A.size(); j++)
    {
        if (A[j] != A[i])
        {
            A[i + 1] = A[j];
            i++;
        }
    }
    return i + 1; // this gives the unique size
}

int main()
{

    vector<int> A = {1, 2, 4, 4, 5, 5};

    cout << RemoveDuplicate(A);
    cout << endl;
    cout << RemoveDuplicate2(A);
}