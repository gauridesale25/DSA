#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string vowels="aeiou";
		for(int i=0;i<5;i++)
		{
			cout<<string((n/5) + ((n%5!=0) && (n%5>i)),vowels[i]);
		}
		cout<<"\n";
		
	}
}
