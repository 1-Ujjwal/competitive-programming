#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int n;
    cin >> n;
    vector<ll> b(n - 1);
    vector<ll> a(n);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> b[i];
    }
    sort(b.begin(), b.end());
    a[0] = b[0] / 2;
    for (int i = 1; i < n; i++)
    {
        a[i] = b[i - 1] - a[i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
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