#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    ifstream input("PTIT.in");
    ofstream output("PTIT.out");
    while (getline(input, a))
    {
        output << a << '\n';
    }
    input.close();
    output.close();
}