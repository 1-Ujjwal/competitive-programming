#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int x;
    cin >> x;
    if (x <= 2)
    {
        cout << 1 << endl;
    }
    else if (x <= 6)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << 3 << endl;
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