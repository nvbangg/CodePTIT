#include <bits/stdc++.h>
using namespace std;
int main()
{
    ifstream fi1("DATA1.in"), fi2("DATA2.in");
    string s;
    set<string> s1, s2;
    while(fi1 >> s)
    {
        for (auto &c : s)
            c = tolower(c);
        s1.insert(s);
    }
    fi1.close();
    while(fi2 >> s)
    {
        for (auto &c : s)
            c = tolower(c);
        s2.insert(s);
    }
    fi2.close();

    map<string, int> a;
    for (auto x : s1)
        a[x]++;
    for (auto x : s2)
        a[x]++;
    for (auto x : a)
        cout << x.first << " ";
    cout << endl;
    for (auto x : a)
        if (x.second > 1)
            cout << x.first << " ";
}