#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void tohop(int n, int k)
{
    vector<char> a(n, 0);
    fill(a.begin(), a.begin() + k, 1);
    do
    {
        for (int i = 0; i < n; ++i)
            if (a[i])
                cout << char(i + 'A');
        cout << endl;
    } while (prev_permutation(a.begin(), a.end()));
}
void testCase()
{
    int n, k;
    cin >> n >> k;
    tohop(n, k);
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