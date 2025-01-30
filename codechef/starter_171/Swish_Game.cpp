#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    ll m, k;
    cin >> m >> k;
    string s;
    cin >> s;
    int count = 0;

    for (int i = 0; i < m; i++)
    {
        if (s[i] == 'S')
        {
            count++;
        }
    }
    if (count >= k)
    {
        cout << m << endl;
    }
    else
    {
        cout << m + (k - count - 1) << endl;
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