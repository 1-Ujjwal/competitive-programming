#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    string s;
    cin >> s;
    int c = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == s[i + 1])
        {
            c++;
            if (c == s.length() - 1)
            {
                cout << "NO" << endl;
                return;
            }
        }
        else if (s.length() == 1)
        {
            cout << "NO" << endl;
            return;
        }
        else
        {
            swap(s[i], s[i + 1]);
            cout << "YES" << endl;
            cout << s << endl;
            return;
        }
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