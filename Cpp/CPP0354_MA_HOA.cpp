#include <bits/stdc++.h>
using namespace std;

void TestCase()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); ++i)
    {
        int j = i;
        while(j < s.size() && s[j] == s[i])
            j++;
        cout << s[i] << j - i;
        i = j - 1;
    }
    cout << endl;
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