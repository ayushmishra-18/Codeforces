//E. Scuza
 
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
    int n,q;
    cin >> n>>q;
    vi arr(n),brr(q);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i=0;i<q;i++){
        cin>>brr[i];
    }
    vi pref(n+1,0);
    vi prefmax(n+1,0);
    for(int i=0;i<n;i++){
        pref[i+1]=pref[i]+arr[i];
        prefmax[i+1]=max(prefmax[i],arr[i]);
    }    
    for(int i=0;i<q;i++){
        int count=upper_bound(prefmax.begin()+1,prefmax.end(),brr[i])-prefmax.begin()-1;
        cout<<pref[count]<<" ";
    }
    cout<<endl;
 
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