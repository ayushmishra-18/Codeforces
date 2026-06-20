//A. Flipping Game
 
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
n integers -> either 0 or 1 
Good Problem
 
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int n;
    cin >> n;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int one=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            one++;
        }
    }
    vi dp(n);
    if(arr[0]==0){
        dp[0]=1;
    }
    else{
        dp[0]=-1;
    }
    int maxi=dp[0];
    for(int i=1;i<n;i++){
        int a;
        if(arr[i]==0){
            a=1;
        }
        else{
            a=-1;
        }
        dp[i]=max(a,dp[i-1]+a);
        maxi=max(maxi,dp[i]);
    }
    cout<<one+maxi<<endl;
 
    
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