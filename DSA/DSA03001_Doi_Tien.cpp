#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void testCase()
{
    int T;
    cin >> T;

    vector<int> denominations = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};

    while (T--)
    {
        int N;
        cin >> N;

        int count = 0;
        for (int denom : denominations)
        {
            count += N / denom;
            N %= denom;
        }

        cout << count << endl;
    }
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
