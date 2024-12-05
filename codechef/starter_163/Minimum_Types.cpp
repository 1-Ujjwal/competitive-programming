#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    ll n, x;
    cin >> n >> x;
    ll b[n];
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    bool flag = false;
    ll sum = 0;
    int count = 0;
    vector<int> products;
    for (int i = 0; i < n; i++)
    {
        products.push_back(a[i] * b[i]);
    }
    sort(products.begin(), products.end(), greater<int>());
    for (int i = 0; i < n; i++)
    {
        sum += products[i];
        count++;
        if (sum >= x)
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout << count << endl;
    }
    else
    {
        cout << -1 << endl;
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