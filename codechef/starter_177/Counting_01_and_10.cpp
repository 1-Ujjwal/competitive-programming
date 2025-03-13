#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    ll n;
    cin >> n;
    ll m = n / 2;

    ll num = m * (3 * n - 2 * m - 1) + 6;
    ll result = (m + 1) * num / 6;

    cout << result << endl;
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