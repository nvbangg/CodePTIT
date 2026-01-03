#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    int x, n = 0, chan = 0, le = 0;
    string line;
    getline(cin, line);
    stringstream ss(line);
    while (ss >> x)
    {
        if (x % 2 == 0)
            chan++;
        else
            le++;
        n++;
    }
    if ((n % 2 == 0 && chan > le) || (n % 2 == 1 && chan < le))
        cout << "YES\n";
    else
        cout << "NO\n";
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