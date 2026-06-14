//B. Random Teams
 
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
pairs => x(x-1)/2
if a team is of 3 player => pair = 3
if a team is of 4 player => pair = 6
for kmax => put one player in each m-1 team and in last team put maximum player
maximum player => n-(m-1)
pairs = (n-(m-1))*(n-m)/2
 
for kmin => distribute players evenly
base size -> n/m and remaining -> n%m
the remaining team size => base+1
pairs = remaining*(base+1)*base/2 + (m-remaining)*base*(base-1)/2
 
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int n,m;
    cin >> n>>m;
    int maxplayer=n-(m-1);
    int kmax=maxplayer*(maxplayer-1)/2;
 
    int base=n/m;
    int remaining=n%m;
    int kmin=remaining*(base+1)*base/2+(m-remaining)*base*(base-1)/2;
    cout<<kmin<<" "<<kmax;
    
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