#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>

using namespace std;

bool isPalindrome(string s)
{
    int i = 0, j = s.size() - 1;

    while (i < j)
    {
        if (s[i] != s[j])
        {
            return false; // mismatch found
        }
        i++;
        j--;
    }
    return true; // all matched
}

int main()
{

    string s = "noon";

    if (isPalindrome(s))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
}