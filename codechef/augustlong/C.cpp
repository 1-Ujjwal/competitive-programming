#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
  int n, k, l;
  cin >> n >> k >> l;
  ll a[n];
  ll sum = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  sort(a, a + n);
  reverse(a, a + n);
  for (int i = l - 1; i < n; i += k)
  {
    sum += a[i];
  }
  cout << sum << endl;
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