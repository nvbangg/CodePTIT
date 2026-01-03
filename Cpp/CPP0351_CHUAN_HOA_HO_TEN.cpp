#include <bits/stdc++.h>
using namespace std;
void chuan_hoa(string &s, vector<string> &v)
{
    stringstream ss(s);
    string a;
    while (ss >> a)
    {
        for (auto &x : a)
            x = tolower(x);
        a[0] = toupper(a[0]);
        v.push_back(a);
    }
}
void TestCase()
{
    int n;
    cin >> n;
    cin.ignore();
    string s;
    getline(cin, s);
    vector<string> v;
    chuan_hoa(s, v);
    if (n == 1)
    {
        cout << v.back() << " ";
        for (int i = 0; i < v.size() - 1; ++i)
            cout << v[i] << " ";
    }
    if (n == 2)
    {
        for (int i = 1; i < v.size(); ++i)
            cout << v[i] << " ";
        cout << v.front();
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