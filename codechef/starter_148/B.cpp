#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int a, b;
    cin >> a >> b;
    int ans = 0;
    while (a != b)
    {
        if (a > b)
        {
            int sum = (a + 1) / 2;
            ans += sum;
            a -= sum;
        }
        if (b > a)
        {
            int sum = (b + 1) / 2;
            ans += sum;
            b -= sum;
        }
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