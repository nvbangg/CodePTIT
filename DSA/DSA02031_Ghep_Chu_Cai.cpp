// === Giải bằng Thuật toán sinh ===

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int n, ok = 1;
vector<int> a;
void init()
{
    char c;
    cin >> c;
    n = (int)(c - '@');
    a.resize(n);
    for (int i = 0; i < n; ++i)
        a[i] = i + 1;
}
void result()
{
    for (auto x : a)
        cout << char(x + '@');
    cout << endl;
}
void sinh()
{
    int i = n - 2, k = n - 1;
    while (a[i] > a[i + 1] && i >= 0)
        i--;
    if (i < 0)
    {
        ok = 0;
        return;
    }
    while (a[k] < a[i])
        k--;
    swap(a[i], a[k]);
    reverse(a.begin() + i + 1, a.end());
}

bool isVowel(int i)
{
    return i == 1 || i == 5;
}
bool check()
{
    for (int i = 1; i < n - 1; ++i)
    {
        if (isVowel(a[i]) && !isVowel(a[i - 1]) && !isVowel(a[i + 1]))
            return 0;
    }
    return 1;
}

void testCase()
{
    init();
    while (ok)
    {
        if (check())
            result();
        sinh();
    }
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int T = 1;
    // cin >> T;
    while (T--)
        testCase();
    return 0;
}