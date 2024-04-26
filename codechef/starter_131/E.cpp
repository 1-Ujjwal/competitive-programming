#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    const int MOD = 1e9 + 7;
    ll ans = 0;
    int sum = 0, i;
    for (i = 0; i < n; i++)
    {
        if (a[i] > 1 && sum > 1)
            break;
        ans += a[i];
        sum += a[i];
    }
    while (i < n)
        ans = (ans * a[i]) % MOD, i++;
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