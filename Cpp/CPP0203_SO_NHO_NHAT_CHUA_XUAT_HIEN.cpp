#include <iostream>
#include <algorithm>
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    int k = 0;
    while (k < n && a[k] <= 0)
        k++;
    if (k == n || a[k] != 1)
        cout << 1 << endl;
    else
    {
        for (int i = k; i < n - 1; i++)
        {
            if (a[i + 1] - a[i] > 1)
            {
                cout << a[i] + 1 << endl;
                return;
            }
        }
        cout << a[n - 1] + 1 << endl;
    }
    return;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}