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
    int ans = 0;
    int diff = 0;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        diff = a[i] - i;
        mp[diff]++;
        ans = max(ans, mp[diff]);
    }
    cout << n - ans << endl;
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