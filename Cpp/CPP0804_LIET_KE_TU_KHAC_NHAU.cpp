#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream fi("VANBAN.in");
    string s;
    set<string> a;
    while (fi >> s)
    {
        for (auto &c : s)
            c = tolower(c);
        a.insert(s);
    }
    fi.close();
    for (auto &word : a)
        cout << word << endl;
    return 0;
}
