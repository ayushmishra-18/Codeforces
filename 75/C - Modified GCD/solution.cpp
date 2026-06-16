//C. Modified GCD
 
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
    int a,b;
    cin >> a>>b;
    int n;
    cin>>n;
    int g=__gcd(a,b);
    vi arr;
    for(int i=1;i*i<=g;i++){
        if(g%i==0){
            arr.pb(i);
            if(i!=g/i){
                arr.pb(g/i);
            }
        }
    }
    sort(all(arr));
    while(n--){
        int l,h;
        cin>>l>>h;
        int i=upper_bound(all(arr),h)-arr.begin();
        if(i==0){
            cout<<-1<<endl;
            continue;
        }
        i--;
        if(arr[i]>=l){
            cout<<arr[i]<<endl;
        }
        else{
            cout<<-1<<endl;
        }
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