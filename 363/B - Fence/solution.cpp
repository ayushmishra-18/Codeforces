//B. Fence
 
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
 
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int n,k;
    cin >> n>>k;
    vi arr(n+1);
    vi dp(n+1,0);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        dp[i]=dp[i-1]+arr[i];
    }
    int minisum=INF;
    int idx=1;
    for(int i=k;i<=n;i++){
        int curr=dp[i]-dp[i-k];
        if(curr<minisum){
            minisum=curr;
            idx=i-k+1;
        }
    }
    cout<<idx<<endl;
    
}
 
signed main() {
    fast_io();
    int t = 1;
    // cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}