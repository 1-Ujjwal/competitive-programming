#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    int n = 3;
    int a[n], b[n];
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + n);
    reverse(a, a + n);
    reverse(b, b + n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] < b[i] || (a[i] == b[i] && a[i + 1] < b[i + 1]) || (a[i] == b[i] && a[i + 1] == b[i + 1] && a[i + 2] < b[i + 2]))
        {
            cout << "Bob" << endl;
            return;
        }
        else if (a[i] > b[i] || (a[i] == b[i] && a[i + 1] > b[i + 1]) || (a[i] == b[i] && a[i + 1] == b[i + 1] && a[i + 2] > b[i + 2]))
        {
            cout << "Alice" << endl;
            return;
        }
        else
        {
            cout << "Tie" << endl;
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