#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int N = 1005;

int t, n, u;
vector<vector<int>> mtKe(N, vector<int>(N));
vector<int> degOut(N);
vector<int> degIn(N);
vector<bool> visited(N);

// dfs đồ thị vô hướng tương ứng
void dfsYeu(int i)
{
    visited[i] = true;
    for (int j = 1; j <= n; j++)
        if ((mtKe[i][j] || mtKe[j][i]) && !visited[j])
            dfsYeu(j);
}

bool lienThong()
{
    visited.assign(N, false);
    dfsYeu(1); 
    for (int i = 1; i <= n; i++)
        if (!visited[i])
            return false;
    return true;
}

// 1: Euler, 2: nửa Euler, 0: không phải
// Kiểm tra Euler cho đồ thị có hướng
int checkEuler()
{
    if (!lienThong())
        return 0;
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
        bool found = false;
        for (int j = 1; j <= n; j++)
        {
            if (mtKe[i][j] == 1)
            {
                found = true;
                st.push(j);
                mtKe[i][j] = 0;
                break;
            }
        }
        if (!found)
        {
            path.push_back(st.top());
            st.pop();
        }
    }
    reverse(path.begin(), path.end());
    for (auto x : path)
        cout << x << " ";
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    freopen("CT.INP", "r", stdin);
    freopen("CT.OUT", "w", stdout);
    cin >> t >> n;
    if (t == 2)
        cin >> u;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            cin >> mtKe[i][j];
            if (mtKe[i][j] == 1)
            {
                degOut[i]++;
                degIn[j]++;
            }
        }
    if (t == 1)
        cout << checkEuler();
    else if (t == 2)
        chuTrinhEuler(u);
}