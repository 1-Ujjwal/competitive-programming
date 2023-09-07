#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int x, h;
    cin >> x >> h;
    int count = 0;
    int c = x / 2;
    for (int i = 1; i < 6; i++)
    {
        h -= c;
        if (h <= 0)
        {
            cout << i << endl;
            return;
        }
    }
    int d = h % x;
    int ans = h / x;
    if (d > 0)
        ans++;
    ans += 5;
    cout << ans << endl;
    return;
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