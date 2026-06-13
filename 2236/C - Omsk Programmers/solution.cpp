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
    int a,b,x;
    cin >> a>>b>>x;
    int ans=abs(a-b);
    int count=0;
    while(a>0 || b>0){
        if(a>b){
            a=a/x;
        }
        else{
            b=b/x;
        }
        count++;
        ans=min(ans,count+abs(a-b));
        if(a==b){
            break;
        }
    }
    cout<<ans<<endl;    
    
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