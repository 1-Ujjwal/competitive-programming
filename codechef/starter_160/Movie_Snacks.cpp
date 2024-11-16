#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int x, y, z;
    cin >> x >> y >> z;
    int sum = 2 * x + 3 * y;
    int sum1 = 2 * z + y;
    int ans = min(sum, sum1);
    cout << ans << endl;
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