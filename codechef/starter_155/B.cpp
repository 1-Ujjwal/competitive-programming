#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int n;
    cin >> n;
    int areaofr = 0;
    for (int a = 1; a <= n / 2; a++)
    {
        int b = (n - 2 * a) / 2;
        if (b > 0)
            areaofr = max(a * b, areaofr);
    }
    cout << areaofr << endl;
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