#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int n;
    cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> y[i];
    }
    int pivot = y[0];
    int idx = -1;
    for (int i = 0; i < n; i++)
    {
        if (x[i] == pivot)
        {
            idx = i;
            break;
        }
    }
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        int a = abs(pivot - x[i]);
        int b = x[i];
        ans.push_back({a, b});
    }
    sort(ans.begin(), ans.end());

    vector<int> res;
    for (int i = 0; i < n; i++)
    {
        res.push_back(ans[i][1]);
    }
    if (res == y)
    {
        cout << idx + 1 << endl;
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