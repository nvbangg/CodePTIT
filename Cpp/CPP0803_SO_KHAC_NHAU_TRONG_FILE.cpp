#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream fi("DATA.in");
    vector<int> mark(1001, 0); 
    int x;
    while (fi >> x)
        mark[x]++;
    fi.close();
    for (int i = 0; i < 1001; ++i)
        if (mark[i] > 0)
            cout << i << " " << mark[i] << endl;
    return 0;
}
