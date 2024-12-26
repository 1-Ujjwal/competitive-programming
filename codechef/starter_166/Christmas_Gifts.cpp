#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int h, l, w;
    cin >> h >> l >> w;
    int a = 2 * ((h * l) + (l * w) + (w * h));
    int result = 1000 / a;
    cout << result << endl;
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