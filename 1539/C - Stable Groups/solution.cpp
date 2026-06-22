//C. Stable Groups
 
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
Good Problem
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int n,k,x;
    cin >> n>>k>>x;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(all(arr));    
    vi gaps;
    for(int i=1;i<n;i++){
        int diff=arr[i]-arr[i-1];
        if(diff>x){
            int need=(diff-1)/x;
            gaps.pb(need);
        }
    }
    int groups=gaps.size()+1;
    sort(all(gaps));
    for(int i=0;i<gaps.size();i++) {
        if (k>=gaps[i]) {
            k-=gaps[i];
            groups--;
        }
        else{
            break;
        }
    }
    cout<<groups<<endl;
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