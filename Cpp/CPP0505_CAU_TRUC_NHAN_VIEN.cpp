#include <bits/stdc++.h>
using namespace std;
struct NhanVien
{
    string id, name, gender, dob, add, tax, date;
};
void chuanHoa(string &a)
{
    if (a[1] == '/')
        a.insert(0, "0");
    if (a[4] == '/')
        a.insert(3, "0");
}
void nhap(NhanVien &a)
{
    a.id = "00001";
    getline(cin, a.name);
    cin >> a.gender >> a.dob;
    cin.ignore();
    getline(cin, a.add);
    cin >> a.tax >> a.date;
    chuanHoa(a.dob);
    chuanHoa(a.date);
}
void in(NhanVien &a)
{
    cout << a.id << ' ' << a.name << ' ' << a.gender << ' ' << a.dob << ' ';
    cout << a.add << ' ' << a.tax << ' ' << a.date;
}
int main()
{
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}