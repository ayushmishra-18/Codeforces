//B. Perfect Number
 
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
Good problem
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int n;
    cin >> n;
    int count=0;
    int curr=19;    
    while(true){
        int sum=0;
        int a=curr;
        while(a>0){
            sum+=a%10;
            a=a/10;
        }
        if(sum==10){
            count++;
        }
        if(count==n){
            cout<<curr;
            return;
 
        }
        curr+=9;
        
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