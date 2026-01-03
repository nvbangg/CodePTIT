#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    int k;
    string s;
    cin >> k >> s;

    for (int i = 0; i < s.length(); ++i)
    {
        if (k == 0)
            break;
        // Tìm char lớn nhất (lớn hơn s[i]) và đứng sau i
        char c = '0';
        for (int j = i + 1; j < s.length(); ++j)
        {
            c = max(c, s[j]);
        }
        if (c <= s[i])
            continue;

        string newz = s;
        for (int j = i + 1; j < s.length(); ++j)
        {
            // Nếu có nhiều char cùng bằng c, thử swap các TH và lấy TH max
            if (s[j] == c)
            {
                string temp = s;
                swap(temp[i], temp[j]);
                newz = max(newz, temp);
            }
        }
        s = newz;
        k--;
    }
    cout << s;
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
        testCase();
    return 0;
}