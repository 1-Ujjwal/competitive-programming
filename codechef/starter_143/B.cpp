#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int n, x;
    cin >> n >> x;
    int ans = 0;
    while (x)
    {
        ans += pow(2, n);
        x--;
        n--;
    }
    while (n)
    {
        ans -= pow(2, n);
        n--;
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