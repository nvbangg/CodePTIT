#include <bits/stdc++.h>
using namespace std;
void TestCase()
{
	int n, k;
	cin >> n >> k;
	int a[n];
	for (auto &x : a)
		cin >> x;
	sort(a, a + n);
	cout << a[k - 1] << endl;
}
int main()
{
	int T;
	cin >> T;
	while(T--)
		TestCase();
	return 0;
}
