#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int x, y, z;
    cin >> x >> y >> z;
    if (y * z > x)
    {
        cout << -1 << endl;
    }
    else if (y * z == x)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << x - (y * z) << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}