#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int n, k;
    cin >> n >> k;
    multiset<int> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m.insert(x);
    }
    while (k--)
    {
        int sum = *m.begin() + *m.rbegin();
        m.erase(m.begin());
        m.erase(prev(m.end()));
        m.insert(sum);
    }
    for (auto i : m)
    {
        cout << i << " ";
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
