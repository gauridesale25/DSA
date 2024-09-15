#include <bits/stdc++.h>
using namespace std;
void solve();
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}
void solve()
{
	int n,m;
	cin>> n>>m;
	if(n>=m && n%2==m%2)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
}
