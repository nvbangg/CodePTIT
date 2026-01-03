#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    int v, e;
    cin >> v >> e;

    int deg[1001] = {0};
    int degn[1001] = {0};

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        deg[a]++;
        degn[b]++;
    }

    bool check = true;
    for (int i = 1; i <= v && check; i++)
    {
        if (deg[i] != degn[i])
            check = false;
    }

    if (check == true)
        cout << 1;
    else
        cout << 0;

    cout << endl;
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