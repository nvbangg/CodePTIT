#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<string> a;
    int i = 0, j = 0, res = 0;
    bool check = false; // biến biểu diễn trạng thái
    while (i < s.size())
    {
        while (j + 1 < s.size() && s[j] == s[j + 1])
            j++;
        a.push_back(s.substr(i, j - i + 1));
        i = ++j;
    }
    for (int idx = a.size() - 1; idx >= 0; idx--)
    {
        if ((a[idx][0] == 'A' && !check) || (a[idx][0] == 'B' && check))
            continue;
        res++;
        if (a[idx].size() > 1)
            check = !check;
    }
    cout << res;
}
