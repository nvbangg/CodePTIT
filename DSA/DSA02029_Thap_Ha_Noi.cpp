#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void tower(int n, char a, char b, char c)
{
    if (n == 1)
    {
        cout << a << " -> " << c << endl;
        return;
    }
    tower(n - 1, a, c, b);
    tower(1, a, b, c);
    tower(n - 1, b, a, c);
}

void testCase()
{
    int n;
    cin >> n;
    tower(n, 'A', 'B', 'C');
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