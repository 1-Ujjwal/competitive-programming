#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] & 1)
        {
            odd++;
        }
    }
    cout << max(odd, n - odd) << endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}