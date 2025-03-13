#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int x, y, k;
    cin >> x >> y >> k;
    int diff = abs(x - y);
    int count = 0;
    if (diff == k)
    {
        count = 0;
    }
    else if (diff < k)
    {
        if ((k - diff) % 2 != 0)
        {
            count = -1;
        }
        else
        {
            count = (k - diff) / 2;
        }
    }
    else
    {
        if ((diff - k) % 2 != 0)
        {
            count = -1;
        }
        else
        {
            count = (diff - k) / 2;
        }
    }

    cout << count << endl;
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