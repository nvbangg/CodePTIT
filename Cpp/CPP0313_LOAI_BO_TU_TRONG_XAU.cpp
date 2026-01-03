#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    getline(cin, a);
    cin >> b;
    vector<string> s;
    for (int i = 0; i < a.length(); ++i)
    {
        if (a[i] != ' ')
        {
            int j = i + 1;
            while (a[j] != ' ' && j < a.length())
                j++;
            s.push_back(a.substr(i, j - i));
            i = j;
        }
    }
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] != b)
            cout << s[i] << " ";
    }
    return 0;
}