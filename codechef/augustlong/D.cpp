#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    string s;
    cin >> s;
    string target = "codechef";
    if (s.length() != target.length())
    {
        cout << -1 << endl;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == target[i])
        {
            for (int j = 0; j < s.length(); j++)
            {
                if (s[j] != target[i] && s[i] != target[j])
                {
                    swap(s[i], s[j]);
                    break;
                }
            }
            if (s[i] == target[i])
            {
                cout << -1 << endl;
                return;
            }
        }
    }
    cout << s << endl;
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