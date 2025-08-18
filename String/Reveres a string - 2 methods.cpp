#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>

using namespace std;

// using reverse()
string reverseString(string &s)
{
    reverse(s.begin(), s.end());
    return s;
}

// two pointers
string reverseStringPointers(string &sp)
{
    int i = 0, j = sp.size() - 1;
    int temp;

    while (i < j)
    {
        temp = sp[i];
        sp[i] = sp[j];
        sp[j] = temp;
        i++;
        j--;
    }

    return sp;
}

int main()
{

    string s = "SubhanAlom";
    string sp = "NidhiSanni";

    reverseString(s);
    reverseStringPointers(sp);

    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < sp.length(); i++)
    {
        cout << sp[i] << " ";
    }
}