#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int n, x;
    cin >> n >> x;
    int even = n / 2;
    int odd = n - even;
    if (x % 2 == 0)
    {
        cout << even - 1 << endl;
    }
    else
    {
        cout << odd - 1 << endl;
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