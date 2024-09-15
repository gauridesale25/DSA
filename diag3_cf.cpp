#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve();
int main()
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt","w",stderr);
#endif
    
    int t=1;
    
    cin>>t;
    while(t--)
	{
        solve();
    }
} 
void solve()
{
	ll n,k;
	ll ans=1;//total count of diagonals used
	ll temp=n;//length of longest diagonal
	cin>>n>>k;
	if(k==0)
	{
		cout<<0<<endl;
		return;
	}
	if(k<=n)
	{
		cout<<1<<endl;
		return;
	}
	k-=n;//greedy algo
	//If chips remain after filling one diagonal, 
	//move to the next diagonal until all chips are placed or no diagonals are left.
	while(temp>0 && k>=temp)
	{
		ans++;
		k-=temp;
		if(k<temp)
		{
			break;
		}
		k-=temp;
		ans++;
		temp--;

	}
	if(temp!=0 && k>0)
	{
		ans++;
		cout<<ans<<endl;
	}

}
 

