#include<bits/stdc++.h>
using namespace std;
void solve();
int main()
{
	int t=1;
	cin>>t;
	while(t--)
	{
		solve();
	}
}
void solve()
{
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;++i)
	{
	  cin>>a[i];
	}
	int maxi=INT_MAX;
	for(int i=1;i<n;++i)
	{
		maxi=min(maxi,max(a[i],a[i-1]));
	}
	cout<<maxi-1<<endl;
}
