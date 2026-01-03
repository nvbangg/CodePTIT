#include <bits/stdc++.h>
using namespace std;
struct NhanVien 
{
    string id, name, gender, dob, add, tax, date;
};
void chuanHoa(string &s)
{
    if (s[1] == '/') 
        s.insert(0, "0");
    if (s[4] == '/')
        s.insert(3, "0");
}
int pos = 0;
void nhap(NhanVien &a)
{
    a.id = to_string(++pos);
    while(a.id.size() < 5)
        a.id = "0" + a.id;
    cin.ignore();
    getline(cin, a.name);
    getline(cin, a.gender);
    getline(cin, a.dob);
    getline(cin, a.add);
    getline(cin, a.tax);
    cin >> a.date;
    chuanHoa(a.dob);
    chuanHoa(a.date);
}
void inds(NhanVien a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << a[i].id << ' ' << a[i].name << ' ' << a[i].gender << ' ' << a[i].dob;
        cout << ' ' << a[i].add << ' ' << a[i].tax << ' ' << a[i].date << endl;
    }
}
int main()
{
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        nhap(ds[i]);
    inds(ds, N);
    return 0;
}