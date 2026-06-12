//C. Poisoned Dagger
 
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
    int n,health;
    cin >> n>>health;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int l=1;
    int h=1e18;
    int ans=h;
    while(l<=h){
        int mid=l+(h-l)/2;
        int d=0;
        for(int i=0;i<n-1;i++){
            d+=min(mid,arr[i+1]-arr[i]);
        }
        d+=mid;
        if(d>=health){
            ans=mid;
            h=mid-1;
        }
        else{
            l=mid+1;
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