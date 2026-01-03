#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, s;
    cin >> m >> s;
    if (s == 0 && m == 1)
    {
        cout << "0 0\n";
        return 0;
    }
    if (s == 0 || s > 9 * m)
    {
        cout << "-1 -1\n";
        return 0;
    }

    // Tìm số lớn nhất
    string lon(m, '0');
    int sum = s;
    for (int i = 0; i < m; ++i)
    {
        int tmp = min(9, sum);
        lon[i] = '0' + tmp;
        sum -= tmp;
    }

    // Tìm số bé nhất Đảm bảo số đầu tiên không phải '0'
    string nho = lon;
    reverse(nho.begin(), nho.end());
    if (nho[0] == '0')
    {
        nho[0] = '1';
        for (int i = 1; i < m; ++i)
            if (nho[i] > '0')
            {
                nho[i]--;
                break;
            }
    }
    cout << nho << ' ' << lon << endl;
    return 0;
}
