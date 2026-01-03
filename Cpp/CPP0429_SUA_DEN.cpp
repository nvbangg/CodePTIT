#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, b;
    cin >> n >> k >> b;
    vector<int> a(n + 1, 1);
    for (int i = 0; i < b; i++)
    {
        int x;
        cin >> x;
        a[x] = 0;
    }
    int cnt = 0; // Số phần tử = 0 trong từng dãy
    for (int i = 1; i <= k; i++)
        cnt += a[i]; // Tính số phần tử bằng 1 trong dãy k đầu tiên
    int res = k - cnt;
    for (int i = k + 1; i <= n; i++)
    {
        cnt = cnt + a[i] - a[i - k];
        res = min(res, k - cnt);
    }
    cout << res;
}