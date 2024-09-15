
#include <bits/stdc++.h>
using namespace std;

int Diagonals(int n, int k) 
{
    if (k == 0) {
    	cout<<0<endl;
        return ;
    }
    
    int min_diagonals = min(k, 2 * n - 1);
    return min_diagonals;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        cout <<Diagonals(n, k) << endl;
    }
    
    return 0;
}

