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
	return 0;
}
void solve()
{
	int n;
	cin>>n;
	
	vector<int> alice(n),bob(n);
	
	for(int i=0;i<n;i++)
	{
		cin>>alice[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>bob[i];
	}
	
    vector<int> revbob=bob;
    reverse(revbob.begin(),revbob.end());
    
    if(alice==bob || alice==revbob)
		cout<<"Bob\n";
	else
		cout<<"Alice\n";
	
}
