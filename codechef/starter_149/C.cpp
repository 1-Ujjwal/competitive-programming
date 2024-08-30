#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int n;
    cin >> n;
    int a[n];
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int start = -1, end = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            start = i;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
            end = i;
    }
    if (start == -1)
    {
        cout << 0 << endl;
    }
    else
    {
        for (int i = start; i <= end; i++)
        {
            if (a[i] < 0)
                c++;
        }
        cout << c << endl;
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