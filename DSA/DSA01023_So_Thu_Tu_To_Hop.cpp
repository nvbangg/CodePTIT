#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void tohop(int n, int k, vector<int> b)
{
    vector<int> a(n, 0);

    fill(a.begin(), a.begin() + k, 1);
    int idx = 0;
    do
    {
        ++idx;
        vector<int> c;
        for (int i = 0; i < n; ++i)
            if (a[i])
                c.push_back(i + 1);
        if (c == b)
        {
            cout << idx << endl;
            break;
        }

    } while (prev_permutation(a.begin(), a.end()));
}
void testCase()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(k);
    for (auto &x : a)
        cin >> x;
    tohop(n, k, a);
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
        testCase();
    return 0;
}