#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int n;
    cin >> n;
    int a[n];
    int x = 0;
    int y;
    int t;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        x ^= a[i];
    }
    y = x;
    int ans;
    for (int i = 0; i < n; i++)
    {
        t = x ^ a[i];
        y = min(t, y);
    }
    cout << y << endl;
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