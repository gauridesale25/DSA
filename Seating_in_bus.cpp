#include<bits/stdc++.h>
using namespace std;
void solve() 
{
  int n;
  cin >> n;
  set<int>s;
  bool b=true;
  for (int i=0; i<n; i++)
  {
    int x;
    cin >> x;
    s.insert(x);
    if (i!=0) 
	{
      if (s.find(x-1)==s.end() && s.find(x+1)==s.end()) b=false;
    }
  }
  if (b)
  	cout<<"YES\n";
  else 
  	cout<<"NO\n";
}

signed main() 
{
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int T=1;
  cin >> T;
  while (T--) 
  {
    solve();
  }
  return 0;
}

