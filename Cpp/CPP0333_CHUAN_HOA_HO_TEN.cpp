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
    for (auto &x : v.back())
        x = toupper(x);
}
int main()
{
    string s;
    getline(cin, s);
    vector<string> v;
    chuan_hoa(s, v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
        if (i == v.size() - 2)
            cout << ", ";
        else
            cout << " ";
    }
}