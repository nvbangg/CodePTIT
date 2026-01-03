#include <bits/stdc++.h>
using namespace std;
void TestCase()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    vector<string> res;
    while (ss >> word)
        res.push_back(word);
    for (int i = res.size() - 1; i >= 0; i--)
        cout << res[i] << " ";
    cout << endl;
}
int main()
{
    int T;
    cin >> T;
    cin.ignore();
    while (T--)
        TestCase();
}