#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int x;
    cin >> x;
    int sum = x * 5;
    if (sum <= 60)
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
    // 	cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}