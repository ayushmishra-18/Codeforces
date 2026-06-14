//C. Array Game
 
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
Good Problem
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
    if(k>=3){
        cout<<0<<endl;
        return;
    }
    int mindiff=arr[0];
    for(int i=0;i<n-1;i++){
        mindiff=min(mindiff,arr[i+1]-arr[i]);
    }
    if(k==1){
        cout<<mindiff<<endl;
        return;
    }
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int diff=arr[j]-arr[i];
            int i=lower_bound(all(arr),diff)-arr.begin();
            if(i<n){
                mindiff=min(mindiff,arr[i]-diff);
            }
            if(i>0){
                mindiff=min(mindiff,diff-arr[i-1]);
            }
        }
        
    }
    cout<<mindiff<<endl;
   
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