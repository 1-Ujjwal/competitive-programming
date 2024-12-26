#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int n;
    cin >> n;
    int a[n];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[a[i]] = i + 1;
    }
    for (auto i : m)
    {
        ans += i.second;
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