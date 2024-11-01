#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int n;
    cin >> n;
    int x = 0;
    cin >> x;
    int a[n];
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        x &= a[i];
    }
    cout << x << endl;
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