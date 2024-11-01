#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    ll n;
    cin >> n;
    unordered_map<ll, ll> m;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ll temp = a[i];
        ans -= m[temp];
        m[temp]++;
        ans += m[temp];

        while (m[temp] > 1)
        {
            ans -= m[temp];
            ans -= m[2 * temp];
            m[2 * temp] += m[temp] / 2;
            m[temp] = m[temp] % 2;
            ans += m[temp];
            ans += m[2 * temp];
            temp = 2 * temp;
        }
        cout << ans << " ";
    }
    cout << endl;
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