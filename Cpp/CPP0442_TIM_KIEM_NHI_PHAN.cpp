#include <bits/stdc++.h>
using namespace std;
void TestCase()
{
	int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    cout << (binary_search(a, a + n, x) ? 1 : -1) << endl;
}
int main() 
{
    int T;
    cin >> T;
    while (T--) 
		TestCase();
    return 0;
}

