#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>

using namespace std;

// using set - brute force
int stringP(vector<int> &A)
{
}

int main()
{

    string s = "SubhanAlom";

    cout << s.length() << endl;
    cout << s.substr(0, 6) << endl;
    cout << s.append("009") << endl;
    cout << s.insert(6, "_") << endl;
    cout << s.erase(6, 1) << endl;
    cout << s.replace(0, 6, "Wiper") << endl;

    for (char c : s)
    {
        cout << c << " ";
    }
    cout << endl;
    // or
    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i] << " ";
    }
}