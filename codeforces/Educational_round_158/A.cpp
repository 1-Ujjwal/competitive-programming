#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int n, x;
    cin >> n >> x;
    int a[n + 1];
    a[0] = 0;
    for (int i = 1; i < n + 1; i++)
    {
        cin >> a[i];
    }
    int maximum = 0;
    bool f = 0;
    for (int i = 0; i < n; i++)
    {
        maximum = max(maximum, (a[i + 1] - a[i]));
        f = 1;
    }
    if (f)
    {
        int maximum2 = ((x - a[n]) * 2);
        maximum = max(maximum2, maximum);
    }
    cout << maximum << endl;
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