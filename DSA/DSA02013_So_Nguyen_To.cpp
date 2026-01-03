#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int n, p, s;
vector<vector<int>> res;
vector<int> e(201, 1);
vector<int> prime;

void sieve()
{
    e[0] = e[1] = 0;
    for (int i = 2; i * i <= 200; ++i)
    {
        if (e[i])
        {
            for (int j = i * i; j <= 200; j += i)
            {
                e[j] = 0;
            }
        }
    }
    for (int i = 2; i <= 200; ++i)
    {
        if (e[i] == 1)
            prime.push_back(i);
    }
}

void Try(int pos, int sum, vector<int> lst)
{
    if (lst.size() == n)
    {
        if (sum == s)
            res.push_back(lst);
        return;
    }
    for (int i = pos; i < prime.size(); ++i)
    {
        if (sum + prime[i] <= s)
        {
            lst.push_back(prime[i]);
            Try(i + 1, sum + prime[i], lst);
            lst.pop_back();
        }
        else
            return;
    }
}

void testCase()
{
    res.clear();
    cin >> n >> p >> s;
    for (int i = 0; i < prime.size(); ++i)
    {
        if (prime[i] > p)
        {
            Try(i, 0, {});
            break;
        }
    }
    sort(res.begin(), res.end());
    cout << res.size() << endl;
    for (auto i : res)
    {
        for (auto j : i)
            cout << j << " ";
        cout << endl;
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    sieve();
    int T = 1;
    cin >> T;
    while (T--)
        testCase();
    return 0;
}