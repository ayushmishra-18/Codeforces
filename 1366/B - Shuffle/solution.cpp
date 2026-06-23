//B. Shuffle
 
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
    int n,x,m;
    cin >> n>>x>>m;
    int L=x;
    int R=x;
    while(m--){
        int l,r;
        cin>>l>>r;
        if(l<=R && r>=L){
            if(l<L){
                L=l;
            }
            if(r>R){
                R=r;
            }
        }
    }
    cout<<R-L+1<<endl;
    
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