#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    ll a, b, n;
    cin >> a >> b >> n;
    ll ans = b;
    for (int i = 0; i < n; i++)
    {
        ll el;
        cin >> el;
        ans += min(a - 1, el);
    }
    cout << ans << endl;
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