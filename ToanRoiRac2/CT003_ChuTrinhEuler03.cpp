#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 105;

int t, n, u;
vector<set<int>> dsKe(N);
vector<int> degOut(N, 0);
vector<int> degIn(N, 0);
vector<bool> visited(N);

// 1: Euler, 2: nửa Euler, 0: không phải
// Kiểm tra Euler cho đồ thị có hướng
int checkEuler()
{
    int cntOut = 0, cntIn = 0;
    for (int i = 1; i <= n; i++)
    {
        if (degOut[i] - degIn[i] == 1)
            cntOut++;
        else if (degIn[i] - degOut[i] == 1)
            cntIn++;
        else if (degOut[i] != degIn[i])
            return 0;
    }
    if (cntOut == 0 && cntIn == 0)
        return 1;
    if (cntOut == 1 && cntIn == 1)
        return 2;
    return 0;
}

void chuTrinhEuler(int i)
{
    stack<int> st;
    vector<int> path;
    st.push(i);
    while (!st.empty())
    {
        i = st.top();
        if (!dsKe[i].empty())
        {
            int j = *dsKe[i].begin();
            st.push(j);
            dsKe[i].erase(j);
        }
        else
        {
            st.pop();
            path.push_back(i);
        }
    }
    reverse(path.begin(), path.end());
    for (auto x : path)
        cout << x << " ";
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // freopen("CT.INP", "r", stdin);
    // freopen("CT.OUT", "w", stdout);
    cin >> t >> n;
    if (t == 2)
        cin >> u;
    for (int i = 1; i <= n; i++)
    {
        int k; // số đỉnh kề
        cin >> k;
        while (k--)
        {
            int j;
            cin >> j;
            degOut[i]++;
            degIn[j]++;
            dsKe[i].insert(j);
        }
    }
    if (t == 1)
        cout << checkEuler();
    else if (t == 2)
        chuTrinhEuler(u);
}