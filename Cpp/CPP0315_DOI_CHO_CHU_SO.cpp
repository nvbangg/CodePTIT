#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    string s;
    getline(cin, s);
    int i = s.size() - 2;
    while(i >= 0 && s[i] <= s[i + 1])
        i--;
    if (i < 0)
    {
        cout << "-1\n";
        return;
    }
    int j = s.size() - 1;
    while (s[j] >= s[i])
        j--;
    while (s[j] == s[j - 1])
        j--;
    swap(s[i], s[j]);
    cout << s << endl;
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