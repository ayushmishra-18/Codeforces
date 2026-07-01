//B. Remilia Plays Soku
 
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
    int n,x1,x2,k;
    cin >> n >>x1>>x2>>k;
    if(n<=3){
        cout<<1<<endl;
        return;
    }
    int diff=abs(x1-x2);
    int d=min(diff,n-diff);
    cout<<d+k<<endl;
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