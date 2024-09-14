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
    int a = 0, b = 0;
    for (auto c : s)
    {
        if (c == '0')
        {
            a++;
        }
        else
        {
            b++;
        }
    }
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if ((i - a) >= 0 && (i - a) % 2 == 0 || (i - b) >= 0 && (i - b) % 2 == 0)
        {
            count++;
        }
    }
    cout << count << endl;
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