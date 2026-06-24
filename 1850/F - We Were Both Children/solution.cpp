//F. We Were Both Children
 
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
here we can simply find the divisors of all i
and add the frquency of frog whose jump matches the divisor
 
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
    vi brr(n+1,0);
    for(int i=0;i<n;i++){
        if(arr[i]<=n){
            brr[arr[i]]++;
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        int curr=0;
        for(int j=1;j*j<=i;j++){
            if(i%j==0){
                curr+=brr[j];
                if(j!=i/j){
                    curr+=brr[i/j];
                }
            }
        }
        ans=max(ans,curr);
 
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