#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    
    vector<int> points(n);
    for(int i = 0; i < n; ++i) 
	{
        cin >> points[i];
    }
    // sort(points.begin(), points.end());
	if (n == 2 && points[1] - points[0] == 1) 
	{
            cout << "NO" << endl;
    }
	 else if (n == 2) 
	{
            cout << "YES" << endl;
    } 
	else 
	{
        int min_diff = points[1] - points[0];
        for (int i = 1; i < n - 1; i++) 
		{
            min_diff = min(min_diff, points[i + 1] - points[i]);
        }
        if (min_diff == 1) 
		{
                cout << "NO" << endl;
        } 
		else 
		{
                cout << "YES" << endl;
        }
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

