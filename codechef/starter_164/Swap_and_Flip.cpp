#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int n;
    cin >> n;
    string s, t;
    cin >> s;
    cin >> t;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[i])
        {
            count++;
        }
    }
    if (count & 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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