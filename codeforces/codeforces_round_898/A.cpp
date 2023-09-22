#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    string s;
    cin >> s;

    if (s[0] == 'a' && s[1] == 'b' && s[2] == 'c')
    {
        cout << "YES" << endl;
    }
    else if (s[0] == 'b' && s[1] == 'a')
    {
        cout << "YES" << endl;
    }
    else if (s[0] == 'a' && s[1] == 'c' && s[2] == 'b')
    {
        cout << "YES" << endl;
    }
    else if (s[0] == 'c' && s[2] == 'a')
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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