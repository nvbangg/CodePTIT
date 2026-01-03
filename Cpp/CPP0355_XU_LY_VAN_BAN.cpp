#include <bits/stdc++.h>
using namespace std;
bool isEndl(string s)
{
    char c = s.back();
    return (c == '.' || c == '?' || c == '!');
}
int main()
{
    vector<string> v;
    string s;
    while (cin >> s) // không dùng stringstream bởi vì đầu vào có thể xuống dòng
        v.push_back(s); 
    bool caps = true; // Đánh dấu cần viết hoa
    for (auto &x : v)
    {
        for (int i = 0; i < x.size(); i++)
            x[i] = tolower(x[i]);
        if (caps)
        {
            x[0] = toupper(x[0]);
            caps = false;
        }
        if (isEndl(x))
        {
            x.pop_back(); 
            cout << x << endl;
            caps = true;
        }
        else
            cout << x << " ";
    }
    return 0;
}
