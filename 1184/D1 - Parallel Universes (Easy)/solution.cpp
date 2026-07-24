//D1. Parallel Universes (Easy)
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define double long double
#define pb push_back
#define all(v) v.begin(), v.end()
#define rall(a) a.rbegin(),a.rend()
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (((a) / gcd(a,b)) * (b))
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
    int n,k,m,t;
    cin >> n>>k>>m>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==1 && b>k){
            n++;
        }
        else if(a==1 && b<=k){
            n++;
            k++;
        }
        else if(a==0 && b>=k){
            n=b;
        }
        else if(a==0 && b<k){
            n-=b;
            k-=b;
        }
        cout<<n<<" "<<k<<endl;
    }
    
}
 
signed main() {
    fast_io();
    int tc = 1;
    //cin >> tc;
    while(tc--) {
        solve();
    }
    
    return 0;
}