#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

// Hàm sinh xâu nhị phân thuận nghịch
void sinh(int n)
{
    int giua = (n - 1) / 2;
    vector<int> a(giua + 1, 0);
    while (true)
    {
        // In ra xâu thuận nghịch
        for (int i = 0; i <= giua; i++)
            cout << a[i] << " ";
        for (int i = n / 2 - 1; i >= 0; i--)
            cout << a[i] << " ";
        cout << endl;

        // Sinh xâu tiếp theo
        int i = giua;
        while (i >= 0 && a[i] == 1)
        {
            a[i] = 0;
            i--;
        }
        if (i < 0)
            break;
        a[i] = 1;
    }
}

void testCase()
{
    int n;
    cin >> n;
    sinh(n);
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int T = 1;
    // cin >> T;
    while (T--)
        testCase();
    return 0;
}