#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int s1=a*b*c;
	int s2=d*d*d;
	if(s1>s2)
	{
		cout<<"Cuboid"<<endl;
	}
	else if(s2>s1)
	{
		cout<<"Cube"<<endl;
	}
	else{
		cout<<"Equal"<<endl;
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t=1;
	// cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}