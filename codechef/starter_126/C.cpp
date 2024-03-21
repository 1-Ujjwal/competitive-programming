#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int c = 0, ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == i)
        {
            ans += (c == 0);
            if (c == 0)
                c = 1;
            else
                c = 0;
        }
        else
            c = 0;
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