#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    bool mark[10] = {0};
    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;
        for (auto x : s)
            mark[x - '0'] = 1;
    }
    for (int i = 0; i < 10; ++i)
        if (mark[i])
            cout << i << " ";
    cout << endl;
}
int main()
{
    int T;
    cin >> T;
    cin.ignore();
    while (T--)
        TestCase();
    return 0;
}