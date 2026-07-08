//E1. Rudolf and Snowflakes (simple version)
 
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
    if(n<7){
        cout<<"NO"<<endl;
        return;
    }
    vi arr;
    
    for(int i=2;i*i<1e6;i++){
        int sum=1+i;
        int k=i*i;
        while(sum+k<=1e6){
            sum+=k;
            arr.pb(sum);
            if(k*i>1e6){
                break;
            }
            k=k*i;
        }
    }
    sort(all(arr));
    arr.erase(unique(all(arr)),arr.end());
    if(binary_search(all(arr),n)){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
    
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