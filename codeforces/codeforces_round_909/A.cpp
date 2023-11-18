#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int n;
    cin >> n;
    if (n % 3 == 0)
    {
        cout << "Second" << endl;
    }
    else
    {
        cout << "First" << endl;
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