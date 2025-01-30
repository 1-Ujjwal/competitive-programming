#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    string s;
    cin >> s;
    string p = "ADVITIYA";
    int diff = 0;
    int count = 0;

    for (int i = 0; i < s.size(); i++)
    {
        diff = p[i] - s[i];
        if (diff < 0)
        {
            diff += 26;
        }
        count += diff;
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