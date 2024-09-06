#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int x, y;
    cin >> x >> y;
    ll c1 = max(x, y);
    ll c2 = min(x, y);

    int s = max(0ll, c2 - (c1 / 2));
    int r = max(0ll, 2 * c2 - c1);
    cout << min(r, s) << endl;
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