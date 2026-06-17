//B. Playing in a Casino
 
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
Very Good Problem
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int n,m;
    cin >> n>>m;
    vector<vi>arr(m,vi(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[j][i];
        }
    }
    int ans=0;
    for(auto &col:arr){
        sort(col.rbegin(),col.rend());
        for(int j=0;j<n;j++){
            ans+=((n-1-j)-j)*col[j];
            
        }
    }
    cout<<ans<<endl;
    
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