#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[0])
        {
            result = max(result, i + 1);
        }
        if (s[i] == s[n - 1])
        {
            result = max(result, n - i);
        }
    }
    cout << result << endl;
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