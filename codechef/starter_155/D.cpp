#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j)
            {
                a[i][j] = 3;
            }
            else
            {
                a[i][j] = 2;
            }
        }
    }
    if (m > n)
    {
        for (int j = n; j < m; j++)
        {
            a[0][j] = 3;
        }
    }
    if (n > m)
    {
        for (int i = m; i < n; i++)
        {
            a[i][0] = 3;
        }
    }

    for (auto &i : a)
    {
        for (auto &j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}