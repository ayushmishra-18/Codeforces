//B. Kuriyama Mirai's Stones
 
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
    int n;
    cin >> n;
    vi arr(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
 
    vi dp(n+1,0);
    for(int i=1;i<=n;i++){
        dp[i]=arr[i]+dp[i-1];
    }
    sort(all(arr));
    vi dpp(n+1,0);
    for(int i=1;i<=n;i++){
        dpp[i]=arr[i]+dpp[i-1];
    }
    int m;
    cin>>m;
    while(m--){
        int type,l,r;
        cin>>type>>l>>r;
        if(type==1){
            cout<<dp[r]-dp[l-1]<<endl;
        }
        else{
            cout<<dpp[r]-dpp[l-1]<<endl;
        }
    }
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