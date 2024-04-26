#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] %= k;
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        a.push_back(a[i] + k);
    }
    int ans = 2e9 + 1;
    for (int i = 0; i < n; i++)
    {
        ans = min(ans, a[i + n - 1] - a[i]);
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