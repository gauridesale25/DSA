#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    
    vector<int> points(n);
    for(int i=0;i< n;++i) 
	{
        cin>>points[i];
    }
	if (n==2&&points[1]-points[0]>=2) 
	{
            cout<< "YES" << endl;
    }
	 else 
	{
            cout<< "NO" << endl;
    } 
	
}
    
int main()
{
    int t;
    cin >> t;
    
    while(t--)
	{
        solve();
    }
    
    return 0;
}

