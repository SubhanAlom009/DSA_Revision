#include <iostream>
using namespace std;

int NSum(int n)
{
    if (n <= 0)
        return 0;
    cout << "Calling NSum(" << n << ")\n";
    int res = n + NSum(n - 1);
    cout << "Result of NSum(" << n << ") = " << res << "\n";
    return res;
}

int main()
{
    NSum(10);
    return 0;
}
