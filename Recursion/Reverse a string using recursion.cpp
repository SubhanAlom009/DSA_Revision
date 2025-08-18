#include <iostream>
using namespace std;

string ReverseString(string s)
{
    if (s == "")
        return "";

    return ReverseString(s.substr(1)) + s[0];
}

int main()
{
    cout << ReverseString("subhan");
    return 0;
}
