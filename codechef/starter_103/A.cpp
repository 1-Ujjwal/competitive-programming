#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int x;
    cin >> x;
    if (x < 3)
    {
        cout << "GOLD" << endl;
    }
    else if (x >= 3 && x < 6)
    {
        cout << "SILVER" << endl;
    }
    else
    {
        cout << "BRONZE" << endl;
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