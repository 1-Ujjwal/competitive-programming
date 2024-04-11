#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int n;
    cin >> n;
    int a[n], b[n], c[n], d[n];
    int s1 = 0;
    int s2 = 0;
    int s3 = 0;
    int s4 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s1 += a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        s2 += b[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
        s3 += c[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
        s4 += d[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (s1 > s3 && s2 > s4)
        {
            cout << "A" << endl;
            return;
        }
        else if (s3 > s1 && s4 > s2)
        {
            cout << "P" << endl;
            return;
        }
        else
        {
            cout << "DRAW" << endl;
            return;
        }
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