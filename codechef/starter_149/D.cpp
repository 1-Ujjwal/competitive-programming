#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    ll sum = 0;
    ll c = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            c++;
            a[i] = abs(a[i]);
        }
    }
    sort(a, a + n);
    if (c & 1)
    {
        a[0] *= -1;
    }
    for (auto &i : a)
    {
        sum += i;
    }
    cout << sum << endl;
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