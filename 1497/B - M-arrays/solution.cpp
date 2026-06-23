//B. M-arrays
 
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
divide all by m and store the frwuency of remainder
then start clubbing
 
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int n,m;
    cin >> n>>m;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vi brr(m,0);
    for(int i=0;i<n;i++){
        brr[arr[i]%m]++;
    }
    int ans=0;
    if(brr[0]>0){
        ans++;
    }
    for (int i=1;i<=m/2;i++) {
        if(i*2==m){
            if(brr[i]>0){
                ans++;
            }
        }
        else{
            int mn=min(brr[i],brr[m-i]);
            int mx=max(brr[i],brr[m-i]);
            if(mx==0){
                continue;
            }
            if(mx<=mn+1){
                ans+=1;
            }
            else{
                ans+=1;
                int alone=mx-(mn+1);
                ans+=alone; 
            }
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