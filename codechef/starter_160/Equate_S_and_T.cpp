#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    int a1 = count(s.begin(), s.end(), 'a');
    int a2 = count(t.begin(), t.end(), 'a');

    int prefixb1 = 0, prefixb2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'b')
        {
            prefixb1++;
        }
        else
        {
            break;
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (t[i] == 'b')
        {
            prefixb2++;
        }
        else
        {
            break;
        }
    }

    if (prefixb1 == prefixb2 && a1 == a2)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
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