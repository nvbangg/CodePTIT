#include <bits/stdc++.h>
using namespace std;
void chuan_hoa(string &s, vector<string> &v)
{
    stringstream ss(s);
    string a;
    while(ss >> a)
    {
        for (auto &x : a)
            x = tolower(x);
        v.push_back(a);
    }
}
void TestCase()
{
    string s;
    getline(cin, s);
    vector<string> v;
    chuan_hoa(s, v);
    cout << v.back();
    for (int i = 0; i < v.size() - 1; ++i)
        cout << v[i][0];
    cout << "@ptit.edu.vn" << endl;
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