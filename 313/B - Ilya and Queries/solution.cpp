//B. Ilya and Queries
 
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
make dp vector , so we don't need to calculate the same range again and again
 
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    string s;
    cin>>s;
    vi dp(s.size()+1,0);
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]){
            dp[i+1]=dp[i]+1;
        }
        else{
            dp[i+1]=dp[i];
        }
    }
    int n;
    cin >> n;
    while(n--){
        int l,r;
        cin>>l>>r;
        cout<<dp[r]-dp[l]<<endl;
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