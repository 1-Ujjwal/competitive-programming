#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    int arr[m];
    unordered_map<int, int> mp;
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        if (mp.find(i) == mp.end())
        {
            ans.push_back(i);
        }
    }
    for (int i = 0; i < k; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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