#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    string s;
    cin >> s;
    string p = "WECNITK";
    if (s == p)
    {
        cout << "Welcome to Web Club!" << endl;
    }
    else
    {
        cout << "Access denied" << endl;
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