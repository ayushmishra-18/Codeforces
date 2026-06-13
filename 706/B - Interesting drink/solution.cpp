//B. Interesting drink
 
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
    int n;
    cin >> n;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int q;
    cin>>q;
    vi brr(q);
    for(int i=0;i<q;i++){
        cin>>brr[i];
    }
    sort(all(arr));
    for(int i=0;i<q;i++){
        int count=upper_bound(all(arr),brr[i])-arr.begin();
        cout<<count<<endl;
    }
    
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