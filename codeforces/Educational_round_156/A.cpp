#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int n;
    cin >> n;
    if (n <= 6 || n == 9)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    int a = 1, b = 2, c = n - 3;
    if (n % 3 == 0)
    {
        cout << a << " " << b + 2 << " " << c - 2 << endl;
    }
    else
    {
        cout << a << " " << b << " " << c << endl;
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