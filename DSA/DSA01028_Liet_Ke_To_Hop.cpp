#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void tohop(int k, vector<int> b)
{

    vector<int> a(b.size(), 0);
    fill(a.begin(), a.begin() + k, 1);
    do
    {
        for (int i = 0; i < b.size(); ++i)
            if (a[i])
                cout << b[i] << " ";
        cout << endl;
    } while (prev_permutation(a.begin(), a.end()));
}

void testCase()
{
    int n, k;
    cin >> n >> k;
    set<int> a;
    int x;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        a.insert(x);
    }
    vector<int> b(a.begin(), a.end());
    tohop(k, b);
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