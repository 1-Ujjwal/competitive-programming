#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int n, m;
    cin >> n >> m;
    if (2 * m >= n)
    {
        cout << "NEWBIE" << endl;
    }
    else
    {
        cout << "PRO" << endl;
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