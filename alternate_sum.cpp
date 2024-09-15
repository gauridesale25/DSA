#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int result = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                result += a[i];  // Add if index is even
            } else {
                result -= a[i];  // Subtract if index is odd
            }
        }
        
        cout << result << endl;
    }
    
    return 0;
}


