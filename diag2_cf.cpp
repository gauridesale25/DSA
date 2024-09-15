#include <iostream>
#include <vector>
using namespace std;

int minDiag(int n, int k)
{
    
    vector<int> diag(2 * n - 1, 0);
    
    int diag_Ind = 0;
    
    
    while (k > 0)
	{
        
        int diagLen = min(diag_Ind + 1, 2 * n - diag_Ind - 1);
        int chipsToPlace = min(diagLen, k);
        
        diag[diag_Ind] = chipsToPlace;
        k -= chipsToPlace;
        diag_Ind++;
    }
    
    
    int occupiedDiagonals = 0;
    for (int i = 0; i < 2 * n - 1; ++i) {
        if (diag[i] > 0) {
            occupiedDiagonals++;
        }
    }
    
    return occupiedDiagonals;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        cout << minDiag(n, k) << endl;
    }
    
    return 0;
}

