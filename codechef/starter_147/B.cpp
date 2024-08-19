#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int p[3];
    p[0] = a;
    p[1] = b;
    p[2] = c;
    sort(p, p + 3);
    int sum = p[0] + p[1];
    int max = p[2];
    if (max <= sum + 1)
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