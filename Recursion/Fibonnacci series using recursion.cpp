#include <iostream>
using namespace std;

int fibonnaciSeries(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fibonnaciSeries(n - 1) + fibonnaciSeries(n - 2);
}

int main()
{

    int n = 10;
    for (int i = 0; i <= n; i++)
    {
        cout << fibonnaciSeries(i) << " ";
    }

    return 0;
}
