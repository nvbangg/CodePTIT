#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int n, m;
int dx[] = {0, -1, 0, 1};
int dy[] = {1, 0, -1, 0};
vector<string> c;
bool visited[510][510];
bool check;

bool isSafe(int x, int y)
{
    if (x >= 0 && y >= 0 && x < n && y < m && c[x][y] != '*')
        return true;
    return false;
}

int findDir(int dx, int dy)
{
    if (dx == 0)
    {
        return dy > 0 ? 4 : 3;
    }
    else if (dy == 0)
    {
        return dx > 0 ? 2 : 1;
    }
}

void dfs(int x, int y, int turn, int direction)
{
    if (check)
        return;
    if (turn > 2)
        return;
    if (c[x][y] == 'T' && turn <= 2)
    {
        check = true;
        return;
    }

    for (int i = 0; i < 4; i++)
    {
        int nextX = x + dx[i];
        int nextY = y + dy[i];
        if (isSafe(nextX, nextY))
        {
            if (!visited[nextX][nextY])
            {
                visited[nextX][nextY] = true;
                int dir = findDir(nextX - x, nextY - y);
                int newTurn = turn;
                if (direction && dir != direction)
                {
                    newTurn++;
                }
                dfs(nextX, nextY, newTurn, dir);
                visited[nextX][nextY] = false;
            }
        }
    }
}

void testCase()
{
    cin >> n >> m;
    c.resize(n);
    memset(visited, false, sizeof visited);

    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        getline(cin, c[i]);
    }

    int x, y;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (c[i][j] == 'S')
            {
                x = i;
                y = j;
            }
        }
    }
    check = false;
    dfs(x, y, 0, 0);

    if (check)
        cout << "YES";
    else
        cout << "NO";

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