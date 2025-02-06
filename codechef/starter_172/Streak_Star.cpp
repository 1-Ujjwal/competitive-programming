#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int countmax(vector<int> &a)
{
    int maxcount = 1, currcount = 1;
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] >= a[i - 1])
        {
            currcount++;
        }
        else
        {
            currcount = 1;
        }
        maxcount = max(maxcount, currcount);
    }
    return maxcount;
}
void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int maxstreak = countmax(a);
    int maxi = maxstreak;
    for (int i = 0; i < n; i++)
    {
        vector<int> increment_a = a;
        increment_a[i] *= x;
        maxi = max(maxi, countmax(increment_a));
    }
    cout << maxi << endl;
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