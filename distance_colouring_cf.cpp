#include<bits/stdc++.h>
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
	int n;
	cin>>n>>m>>k;
	cout<<min(k,n)*min(k,m)<<endl;
	
}
