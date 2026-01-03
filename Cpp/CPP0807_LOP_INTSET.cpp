#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream fi("DATA.in");
    int n, m, x;
    set<int> s1, s2;

    fi >> n >> m;
    for (int i = 0; i < n; ++i)
    {
        fi >> x;
        s1.insert(x);
    }
    for (int i = 0; i < m; ++i)
    {
        fi >> x;
        s2.insert(x);
    }
    fi.close();
    for (auto x : s1)
        if (s2.count(x))
            cout << x << " ";
}