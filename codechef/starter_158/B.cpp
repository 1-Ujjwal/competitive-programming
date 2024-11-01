#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0 && i % 2 == 0)
        {
            a.push_back(i);
        }
        else if (n % i == 0 && i % 2 == 1)
        {
            b.push_back(i);
        }
    }
    if (a.size() > b.size())
    {
        cout << 1 << endl;
    }
    else if (a.size() == b.size())
    {
        cout << 0 << endl;
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