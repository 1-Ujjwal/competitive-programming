#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int x, y;
    cin >> x >> y;
    if (x > y)
    {
        cout << "New" << endl;
    }
    else if (x < y)
    {
        cout << "Old" << endl;
    }
    else
    {
        cout << "Same" << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}