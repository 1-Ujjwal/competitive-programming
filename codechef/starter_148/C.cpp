#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    int a = 0;
    int b = 0;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'R')
        {
            a = a + 1;
        }
        if (s[i] == 'L')
        {
            a = a - 1;
        }
        if (s[i] == 'U')
        {
            b = b + 1;
        }
        if (s[i] == 'D')
        {
            b = b - 1;
        }
    }
    int ans = abs(x - a) + abs(y - b);
    int total = abs(n - ans);
    if (n >= ans && total % 2 == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
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