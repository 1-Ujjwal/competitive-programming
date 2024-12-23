#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    ll cost = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    cost += a[0];
    for (int i = 1; i < n; i++)
    {
        a[i] = a[i] - i;
        if (a[i] > 0)
        {
            cost += a[i];
        }
    }
    cout << cost << endl;
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