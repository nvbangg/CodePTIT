#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<string> a(n);
    for (int i = 0; i < n; ++i)
        getline(cin, a[i]);
    for (int i = 0; i < a.size(); ++i)
        for (int j = i + 1; j < a.size(); ++j)
            if (a[i] == a[j])
            {
                a.erase(a.begin() + j);
                j--;
            }
    cout << a.size() << endl;
}