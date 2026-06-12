//B. Pashmak and Flowers
 
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
    int maxi=*max_element(all(arr));
    int mini=*min_element(all(arr));
    int cmin=count(all(arr),mini);
    int cmax=count(all(arr),maxi);
    if(maxi==mini){
        cout<<maxi-mini<<" "<<(n*(n-1))/2<<endl;
    }
    else{
        cout<<maxi-mini<<" "<<cmin*cmax;
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