//C. Maximum Median
 
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
n is odd
n=7
4 1 2 4 3 4 4
sort => 1 2 3 4 4 4 4
median=>3
make the element from median to the last equal
 
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int n,k;
    cin >> n>>k;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(all(arr));
    int l=arr[n/2];
    int h=1e10;
    int ans=l;
    while(l<=h){
        int mid=l+(h-l)/2;
        int cost=0;
        for(int i=n/2;i<n;i++){
            if(arr[i]<mid){
                cost+=(mid-arr[i]);
            }
        }
        if(cost<=k){
            ans=mid;
            l=mid+1;
        }
        else{
            h=mid-1;
        }
 
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