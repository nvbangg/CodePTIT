#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void insertionSort(vector<int> &a)
{
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;

        cout << "Buoc " << i << ": ";
        for (j = 0; j <= i; ++j)
            cout << a[j] << " ";
        cout << endl;
    }
}
void testCase()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;
    insertionSort(a);
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