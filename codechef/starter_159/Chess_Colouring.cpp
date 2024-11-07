#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    ll n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << ((n * n) / 2) + 2 << endl;
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