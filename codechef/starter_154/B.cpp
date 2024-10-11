#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] < k)
        {
            sum += a[i];
            count++;
        }
        if (sum > k)
        {
            count--;
            break;
        }
        if (a[0] > k)
        {
            count = 0;
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