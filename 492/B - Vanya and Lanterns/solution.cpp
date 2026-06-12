//B. Vanya and Lanterns
 
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
n=7  l=15
15 5 3 7 9 14 0
sort => 0 3 5 7 9 14 15
 
find the maximum gap that would be the diameter
for radius divide it my 2
 
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int n,l;
    cin >> n>>l;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(all(arr));
    double maxx=0;
    for(int i=0;i<n-1;i++){
        int diff=arr[i+1]-arr[i];
        if(diff>maxx){
            maxx=diff;
        }
    }
    double maxgap=maxx/2.0;
    double ans=max({(double)arr[0],maxgap,(double)(l-arr[n-1])});
    cout<<fixed<<setprecision(9)<<ans<<endl;;
 
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