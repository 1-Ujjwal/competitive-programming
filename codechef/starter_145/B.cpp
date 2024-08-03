#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int n, d;
    cin >> n >> d;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count = 0;
    bool inrange = true;
    for (int i = 0; i < n; i++)
    {
        if (inrange)
        {
            if (a[i] > d)
            {
                count++;
                inrange = false;
            }
        }
        else
        {
            if (a[i] <= d)
            {
                count++;
                inrange = true;
            }
        }
    }
    cout << count << endl;
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