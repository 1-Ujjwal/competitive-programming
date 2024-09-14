#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int d, x, y;
    cin >> d >> x >> y;
    int ans = -1;
    int count = 0;
    if (y >= x)
    {
        ans = 0;
    }
    else
    {
        while (y--)
        {
            count++;
            int discount = (x * count * d) / 100;
            int final_value = x - discount;
            if (final_value <= y)
            {
                ans = count;
                break;
            }
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