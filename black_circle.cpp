#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key
// *a.find_by_order(b) = bth element, a.order_of_key(b) = no. of elemets smaller than b
// use less_equal<int> for multiset
// less<int> is a comparator,greater int would sort it in descending order
typedef long long int ll;
typedef long double ld;
#define int long long
#define endl "\n"
#define bits(x) __builtin_popcountll(x)
#define minvec(a) *min_element(all(a))
#define maxvec(a) *max_element(all(a))
const ll mod = 1e9+7;
const ll mod1 = 998244353;
const ld pie = 3.141592653589793238;
 
ll ciel(ll a,ll b){
    if(a%b==0){
        return (a/b);
    }
    return ((a/b)+1);
}
 
 
ll binToDec(string s) { return bitset<64>(s).to_ullong(); }

