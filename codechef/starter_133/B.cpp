#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int n;
    cin >> n;
    if (n == 2)
    {
        cout << 1 << endl;
    }
    else
    {
        int t = n / 4;
        int r = n % 4;
        int s = r / 2;
        cout << t + s << endl;
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