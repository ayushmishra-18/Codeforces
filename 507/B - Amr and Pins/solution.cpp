//B. Amr and Pins
 
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
distance formula = sqrt((x-x1)2 + (y-y1)2)
its distance/diameter
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int r,x,y,x1,y1;;
    cin >> r>>x>>y>>x1>>y1;
    x=x-x1;
    y=y-y1;
    double dist=sqrt(x*x+y*y);
    int steps=ceil(dist/(2.0*r));
    cout<<steps<<endl;
    
    
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