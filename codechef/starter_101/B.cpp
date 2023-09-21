#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int l, v1, v2;
    cin >> l >> v1 >> v2;
    int a = int(ceil((float)l / v1));
    int b = int(ceil((float)l / v2));
    int diff = abs(a - b);
    if (a == b)
    {
        cout << -1 << endl;
    }
    else if (diff == 1)
    {
        cout << 0 << endl;
    }
    else
    {
        int c = abs(a - b);
        cout << c - 1 << endl;
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