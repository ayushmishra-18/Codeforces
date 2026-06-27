//A. Points on Line
 
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
 
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int n,d;
    cin >> n>>d;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int a=0;
    for(int i=0;i<n;i++){
        auto it=upper_bound(all(arr),arr[i]+d);
        int k=(it-arr.begin())-1;
        int count=k-i;
        if(count>=2){
            a=a+(count*(count-1))/2;
        }
 
    }
    cout<<a<<endl;
    
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