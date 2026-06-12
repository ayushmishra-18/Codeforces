//D. Plus Minus Permutation
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl '
'
 
typedef vector<int> vi;
 
const int INF = 1e18;
const int MOD = 1e9 + 7;
 
/*
 
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int n,x,y;
    cin >> n>>x>>y;
    int g=__gcd(x,y);
    int lcm=x*y/g;
    int same=n/lcm;
    int kx=(n/x)-same;
    int ky=(n/y)-same;
    int sumx=kx*(2*n-kx+1)/2;
    int sumy=ky*(ky+1)/2;
    cout<<sumx-sumy<<endl;
    
    
}
 
signed main() {
    fast_io();
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}