#include <bits/stdc++.h>
using namespace std;
void solve()
{
	int l,r;
	cin>>l>>r;
	int odd = 0;
	for(int i = l; i <= r; i++){
		if(i%2) odd++;
	}
	cout<<odd/2<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}
