//D. Super-Permutation
 
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
 
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int n;
    cin >> n;
    if(n==1){
        cout<<1<<endl;
        return;
    }
    if(n%2==1){
        cout<<-1<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        if(i%2==1){
            cout<<i<<" ";
        }
        else{
            cout<<n-i<<" ";
        }
    }
    cout<<endl;
 
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