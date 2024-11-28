#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int n;
    cin >> n;
    int a[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int need = 0.5 * ((n + 1) * 100);
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    if (sum > need)
    {
        cout << 0 << endl;
    }
    else if (need - sum > 100)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << need - sum << endl;
    }
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