#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int a, b, x;
    cin >> a >> b >> x;
    int r = a * b;
    int s = x * x;
    if (s >= r)
    {
        cout << 0 << endl;
    }
    else if (a <= x * x)
    {
        cout << 1 << endl;
    }
    else if (b <= x * x)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 2 << endl;
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