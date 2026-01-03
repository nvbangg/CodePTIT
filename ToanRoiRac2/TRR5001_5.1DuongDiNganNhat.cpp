#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

const int N = 105;

int n, m;
vector<tuple<int, int, int>> dsCanh; // {trongSo, dinh1, dinh2}
int cha[N];                          // mảng cha cho Union-Find

// Tìm cha của đỉnh u với path compression
int Tim(int u)
{
    if (u == cha[u])
        return u;
    return cha[u] = Tim(cha[u]);
}

// Hợp nhất 2 đỉnh u và v
bool HopNhat(int u, int v)
{
    u = Tim(u);
    v = Tim(v);
    if (u == v)
        return false; // Đã cùng thành phần liên thông
    if (u > v)
        swap(u, v);
    cha[v] = u;
    return true;
}

// Thuật toán Kruskal tìm cây khung nhỏ nhất
void Kruskal()
{
    vector<tuple<int, int, int>> cayKhung;
    int tongTrongSo = 0;

    // Sắp xếp các cạnh theo trọng số tăng dần
    sort(dsCanh.begin(), dsCanh.end());

    // Khởi tạo Union-Find
    for (int i = 1; i <= n; i++)
        cha[i] = i;

    // Duyệt qua từng cạnh
    for (auto [trongSo, x, y] : dsCanh)
    {
        if (cayKhung.size() == n - 1)
            break; // Đã đủ n-1 cạnh

        // Nếu 2 đỉnh chưa liên thông thì thêm cạnh này
        if (HopNhat(x, y))
        {
            tongTrongSo += trongSo;
            cayKhung.push_back({trongSo, x, y});
        }
    }

    // In kết quả
    cout << tongTrongSo << endl;
    for (auto [trongSo, x, y] : cayKhung)
        cout << x << " " << y << " " << trongSo << endl;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // freopen("CK.INP", "r", stdin);
    // freopen("CK.OUT", "w", stdout);

    cin >> n >> m;

    // Nhập danh sách cạnh
    for (int i = 0; i < m; i++)
    {
        int x, y, trongSo;
        cin >> x >> y >> trongSo;
        dsCanh.push_back({trongSo, x, y});
    }

    Kruskal();

    return 0;
}