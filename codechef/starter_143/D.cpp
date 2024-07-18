#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int n;
    cin >> n;
    int count = 0;
    int total = n;
    while (total > 0)
    {
        total /= 2;
        count++;
    }
    cout << count << endl;

    int second = 2;
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i == second)
        {
            second *= 2;
            ans++;
        }
        cout << ans << " ";
    }
    cout << endl;
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