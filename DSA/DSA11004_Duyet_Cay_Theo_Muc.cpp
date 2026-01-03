#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

class Node
{
public:
    Node *left;
    Node *right;
    int c;

    Node(int c)
    {
        this->c = c;
        this->left = nullptr;
        this->right = nullptr;
    }
};

Node *createNode(int c)
{
    Node *node = new Node(c);
    return node;
}

void buildTree(Node *r, int u, int v, char d)
{
    if (r != nullptr)
    {
        if (r->c == u)
        {
            if (d == 'L')
                r->left = createNode(v);
            else
                r->right = createNode(v);
        }
        buildTree(r->left, u, v, d);
        buildTree(r->right, u, v, d);
    }
}

void levelOrder(Node *root)
{
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *cur = q.front();
        q.pop();

        cout << cur->c << " ";

        if (cur->left != nullptr)
            q.push(cur->left);
        if (cur->right != nullptr)
            q.push(cur->right);
    }
}

void testCase()
{
    int n;
    cin >> n;

    int u, v;
    char d;

    cin >> u >> v >> d;
    Node *root = createNode(u);
    buildTree(root, u, v, d);

    for (int i = 1; i < n; i++)
    {
        cin >> u >> v >> d;
        buildTree(root, u, v, d);
    }

    levelOrder(root);
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