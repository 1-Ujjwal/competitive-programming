#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int x, y;
    cin >> x >> y;
    int a, b;
    a = (x % 10) * 10 + x / 10;
    b = (y % 10) * 10 + y / 10;
    if (x > y || a > y || a > b || x > b)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
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