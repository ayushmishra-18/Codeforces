//B. Hungry Sequence
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define double long double
#define pb push_back
#define all(v) v.begin(), v.end()
#define endl '
'
 
typedef vector<int> vi;
 
const int INF = 1e18;
const int MOD = 1e9 + 7;
 
/*
Different and easier approach no need to print prime no
Editorial
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int n;
    cin >> n;
    for(int j=0;j<n;j++){
        cout<<3*n+j<<" ";
    }
    cout<<endl;   
    
}
 
signed main() {
    fast_io();
    int t = 1;
    //cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}