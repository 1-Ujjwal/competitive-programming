#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    string t;
    cin >> s;
    cin >> t;
    int c = 0;
    int d = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[i])
        {
            if (s[i] == '1')
                c++;
            else
                d++;
        }
    }

    if (c != d || d > k)
    {
        cout << "NO" << endl;
        return;
    }
    if (n == 2)
    {
        if (c == 1 && k % 2 == 0)
        {
            cout << "NO" << endl;
            return;
        }
        if (s == t && s[0] != s[1] && k % 2 == 1)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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