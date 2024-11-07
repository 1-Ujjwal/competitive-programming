#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int n, x;
    cin >> n >> x;
    int count = 0;
    ll a[n], b[n];
    vector<int> required;
    int needed = (n / 2) + 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cin >> b[i];
    }
    // for (int i = 0; i < n; i++)
    // {
    // }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > b[i])
        {
            count++;
        }
        else
        {
            required.push_back(b[i] - a[i] + 1);
        }
    }
    if (count >= needed)
    {
        cout << "YES" << endl;
        return;
    }
    sort(required.begin(), required.end());

    for (int i = 0; i < required.size(); i++)
    {
        if (x >= required[i] && count < needed)
        {
            x -= required[i];
            count++;
        }
    }
    if (count >= needed)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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