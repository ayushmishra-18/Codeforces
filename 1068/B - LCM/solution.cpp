//B. LCM
 
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
lcm*gcd == p*q
lcm/q => p/gcd -> p is fixed and only gcd changes 
gcd changes if a new no divides q
so find the  divisors of q
Easyy
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int b;
    cin >> b;
    int count=0;
    for(int i=1;i*i<=b;i++){
        if(b%i==0){
            count++;
            if(i!=b/i){
                count++;
            }
        }
    }
    cout<<count<<endl;
    
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