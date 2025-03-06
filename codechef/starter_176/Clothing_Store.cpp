#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int x, y, z, a, b, c;
    cin >> x >> y >> z >> a >> b >> c;
    int count = 0;

    int m = min(a, x);
    count += m;
    a -= m;
    x -= m;

    m = min(b, y);
    count += m;
    b -= m;
    y -= m;

    m = min(c, z);
    count += m;
    c -= m;
    z -= m;

    m = min(b, z);
    count += m;
    b -= m;
    z -= m;

    m = min(a, z);
    count += m;
    a -= m;
    z -= m;

    m = min(a, y);
    count += m;
    a -= m;
    y -= m;

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