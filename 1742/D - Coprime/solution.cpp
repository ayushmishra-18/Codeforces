//D. Coprime
 
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
Good problem because of constraints
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int n;
    cin >> n;
    vi arr(1001,0); 
    
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        arr[a]=i; 
    }
    int ans=-1;
    for(int i=1;i<=1000;i++){
        if(arr[i]==0){
            continue;
        }        
        for(int j=i;j<=1000;j++){
            if(arr[j] == 0){
                continue;
            }            
            if(arr[i]+arr[j]>ans){
                if (__gcd(i,j)==1) {
                    ans=arr[i]+arr[j];
                }
            }
        }
    }
    cout<<ans<<endl;
 
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