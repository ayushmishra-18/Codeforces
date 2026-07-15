//C1. k-LCM (easy version)
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define double long double
#define pb push_back
#define all(v) v.begin(), v.end()
#define rall(a) a.rbegin(),a.rend()
#define gcd(a,b) __gcd(a,b)
#define endl '
'
 
typedef vector<int> vi;
 
const int INF = 1e18;
const int MOD = 1e9 + 7;
 
/*
a1 a2 a3
a1+a2+a3=n
lcm(a1,a2,a3)<=n/2
 
n=5
1 2 2
 
n=8
4 2 2
 
n=10
4 4 2
 
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int n,k;
    cin >> n>>k;
    if(n%2!=0){
        cout<<1<<" "<<n/2<<" "<<n/2<<endl;
    }
    if(n%4==0){
        cout<<n/4<<" "<<n/4<<" "<<n/2<<endl;
    }
    if(n%2==0 && n%4!=0){
        cout<<n/2-1<<" "<<n/2-1<<" "<<2<<endl;
    }
    
}
 
signed main() {
    fast_io();
    int tc = 1;
    cin >> tc;
    while(tc--) {
        solve();
    }
    
    return 0;
}