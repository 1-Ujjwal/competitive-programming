#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int a1, a2, b1, b2, c1, c2;
    cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
    int m1 = max(a1, a2);
    int m2 = max(b1, b2);
    int m3 = max(c1, c2);
    int sum = m1 + m2 + m3;
    cout << sum << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}