#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    ll h, k;
    cin >> h >> k;
    int health = h;
    int count = 0;
    for (int i = 2; i <= sqrt(h); i++)
    {
        while (health % i == 0)
        {
            health /= i;
            count++;
        }
    }
    if (health > 1)
    {
        count++;
    }
    count += log2(k);
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