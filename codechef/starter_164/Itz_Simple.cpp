#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int n, k, p;
    cin >> n >> k >> p;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n, greater<int>());
    int sum1 = k + a[0];
    int sum2 = p;
    for (int i = 1; i < n; i++)
    {
        sum2 += a[i];
    }
    if (sum1 > sum2)
    {
        cout << "Ved" << endl;
    }
    else if (sum2 > sum1)
    {
        cout << "Varun" << endl;
    }
    else
    {
        cout << "Equal" << endl;
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