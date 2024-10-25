#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int n, m;
    cin >> n >> m;
    string s, p;
    cin >> s >> p;

    vector<bool> a(26, false), b(26, false);

    for (char c : s)
    {
        a[c - 'a'] = true;
    }
    for (char c : p)
    {
        b[c - 'a'] = true;
    }

    bool check = false;
    for (int i = 0; i < 26; i++)
    {
        if (!a[i] && !b[i])
        {
            check = true;
            break;
        }
    }
    cout << (check ? "YES" : "NO") << endl;
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