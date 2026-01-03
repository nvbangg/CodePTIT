#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int inorder[1001], preorder[1001];
vector<int> postorder;
unordered_map<int, int> mp;

void get_post_order(int pre_left, int pre_right, int in_left, int in_right)
{
    if (pre_left > pre_right)
        return;

    int root = preorder[pre_left];
    postorder.push_back(root);

    if (pre_left == pre_right)
        return;
    else
    {
        int cntLeft = mp[root] - in_left;
        int cntRight = in_right - mp[root];
        get_post_order(pre_left + cntLeft + 1, pre_right, mp[root] + 1, in_right);
        get_post_order(pre_left + 1, pre_right - cntRight, in_left, mp[root] - 1);
    }
}

void testCase()
{
    int n;
    cin >> n;

    mp.clear();
    postorder.clear();

    for (int i = 1; i <= n; i++)
        cin >> inorder[i], mp[inorder[i]] = i;
    for (int i = 1; i <= n; i++)
        cin >> preorder[i];

    get_post_order(1, n, 1, n);

    for (int i = postorder.size() - 1; i >= 0; i--)
    {
        cout << postorder[i] << " ";
    }
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