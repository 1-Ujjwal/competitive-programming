#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int m = a - b;
    int n = c - d;
    int sum = m + n;
    int e = (-1 * sum);
    if (e > sum)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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