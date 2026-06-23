//A. k-th divisor
 
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
Easyy
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int n,k;
    cin >> n>>k;
    vi arr;
    for(int i=1;i*i<=n;i++) {
        if(n%i==0){
            arr.pb(i);
            if(i!=n/i){
                arr.pb(n/i);
            }
        }
    }
    sort(all(arr));
    if(arr.size()<k){
        cout<<-1<<endl;
    }
    else{
        cout<<arr[k-1]<<endl;
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