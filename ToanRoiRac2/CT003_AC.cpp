#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int t, n, u;
vector<vector<int>> mtKe;
vector<vector<int>> Undirected_G;
vector<bool> visited;

void dfsYeu(int i)
{
    visited[i] = true;
    for (int x = 1; x <= n; x++)
        if (x <= n && Undirected_G[i][x] && !visited[x])
            dfsYeu(x);
}

bool lienThong()
{
    visited.assign(n + 1, false);
    dfsYeu(1);
    for (int i = 1; i <= n; i++)
        if (!visited[i])
            return false;
    return true;
}

void first()
{
    cin >> n;
    mtKe.assign(n + 1, vector<int>(n + 1, 0));
    Undirected_G.assign(n + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= n; i++)
    {
        int k;
        cin >> k;
        for (int j = 1; j <= k; j++)
        {
            int x;
            cin >> x;
            if (x >= 1 && x <= n)
            {
                mtKe[i][x] = 1;
                Undirected_G[i][x] = Undirected_G[x][i] = 1;
            }
        }
    }

    if (!lienThong())
    {
        cout << "0" << endl;
        return;
    }

    int start_node = 0, end_node = 0;
    for (int i = 1; i <= n; i++)
    {
        int deg_in = 0, deg_out = 0;
        for (int j = 1; j <= n; j++)
        {
            if (mtKe[i][j] == 1)
                deg_out++;
            if (mtKe[j][i] == 1)
                deg_in++;
        }
        if (deg_out - deg_in == 1)
            start_node++;
        else if (deg_in - deg_out == 1)
            end_node++;
        else if (deg_in != deg_out)
        {
            cout << "0" << endl;
            return;
        }
    }

    if (start_node == end_node && start_node == 1)
        cout << "2" << endl;
    else if (start_node == end_node && start_node == 0)
        cout << "1" << endl;
    else
        cout << "0" << endl;
}

void chuTrinhEuler()
{
    stack<int> st;
    vector<int> path;
    st.push(u);

    while (!st.empty())
    {
        int v = st.top();
        bool found = false;
        for (int i = 1; i <= n; i++)
        {
            if (i <= n && mtKe[v][i] == 1)
            {
                mtKe[v][i] = 0;
                st.push(i);
                found = true;
                break;
            }
        }
        if (!found)
        {
            path.push_back(st.top());
            st.pop();
        }
    }

    for (auto it = path.rbegin(); it != path.rend(); it++)
        cout << *it << " ";
    cout << endl;
}

void second()
{
    cin >> n >> u;
    mtKe.assign(n + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= n; i++)
    {
        int k;
        cin >> k;
        for (int j = 1; j <= k; j++)
        {
            int x;
            cin >> x;
            if (x >= 1 && x <= n)
                mtKe[i][x] = 1;
        }
    }
    chuTrinhEuler();
}

void solve()
{
    cin >> t;
    if (t == 1)
        first();
    else
        second();
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // freopen("CT.INP", "r", stdin);
    // freopen("CT.OUT", "w", stdout);
    solve();
    return 0;
}