//C. Schedule Management
 
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
    int n,m;
    cin >> n>>m;
    vi arr(m),brr(n+1,0);
    for (int i = 0; i < m; i++) {
        cin >> arr[i];
        brr[arr[i]]++;
    }
    int l=1;
    int h=2*m;
    int ans=h;
    while(l<=h){
        int mid=l+(h-l)/2;
        int a=0;
        int b=0;
        for(int i=1;i<=n;i++){
            if(brr[i]>mid){
                a=a+(brr[i]-mid);
            }
            else{
                b=b+(mid-brr[i])/2;
            }
        }
        if(b>=a){
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