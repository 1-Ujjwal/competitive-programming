#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (k != 0)
        {
            if (a[i] == 1)
            {
                sum += 5;
                k--;
            }
            else if (a[i] == 2)
            {
                sum += 3;
                k--;
            }
            else if (a[i] == 3)
            {
                sum += 1;
                k--;
            }
        }
    }
    cout << sum << endl;
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