//B. Books
 
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
    int n,t;
    cin >> n>>t;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int sum=0;
    int j=0;
    int ans=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        while(sum>t){
            sum-=arr[j];
            j++;
        }
        ans=max(ans,i+1-j);
    }
    cout<<ans<<endl;
        
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