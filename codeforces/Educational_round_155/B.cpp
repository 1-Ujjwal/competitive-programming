#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (auto &x : a)
    {
        cin >> x;
    }
    for (auto &x : b)
    {
        cin >> x;
    }
    ll mn_a = *min_element(a.begin(), a.end());
    ll mn_b = *min_element(b.begin(), b.end());
    ll s_a = accumulate(a.begin(), a.end(), 0ll);
    ll s_b = accumulate(b.begin(), b.end(), 0ll);
    ll ans = min(mn_a * n + s_b, mn_b * n + s_a);
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