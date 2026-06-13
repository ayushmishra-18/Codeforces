//A. Strange Birthday Party
 
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
    vi arr(n),brr(m+1);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i=1;i<=m;i++){
        cin>>brr[i];
    }
    sort(arr.rbegin(),arr.rend());
    int l=0;
    int h=min(n,m);
    int maxx=0;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(mid==0){
            l=mid+1;
            continue;
        }
        if(arr[mid-1]>=mid){
            maxx=mid;
            l=mid+1;
        }
        else{
            h=mid-1;
        }
 
    }
    int cost=0;
    for(int i=0;i<maxx;i++){
        cost+=brr[i+1];
    }
    for(int i=maxx;i<n;i++){
        cost+=brr[arr[i]];
    }
    cout<<cost<<endl;
 
    
 
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