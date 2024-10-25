#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int cur;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> cur;
    sort(a.begin(), a.end());
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > cur && a[i] <= 2 * cur)
        {
            swap(a[i], cur);
        }
        total += a[i];
    }
    cout << total << endl;
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