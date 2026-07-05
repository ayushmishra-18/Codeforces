//B. Duff in Love
 
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
ok simply do prime factorization and print the highest factor with power 1
12 -> 2^2 3^1
 
 
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int n;
    cin >> n;
    vector<pair<int,int>> arr;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            int count=0;
            while(n%i==0){
                n=n/i;
                count++;
            }
            arr.pb({i,count});
        }
    }
    if(n>1){
        arr.pb({n,1});
    }
    int ans=1;
    for(int i=0;i<arr.size();i++){
        ans=ans*arr[i].first;
    }
    cout<<ans<<endl;
    // for(int i=arr.size()-1;i>=0;i--){
    //     int a=0;
    //     for(int j=1;j<i;j++){
    //         if((arr[j]*arr[j])>arr[i]){
    //             break;
    //         }
    //         if(arr[i]%(arr[j]*arr[j])==0){
    //             a=1;
    //             break;
    //         }
    //     }
    //     if(a==0){
    //         cout<<arr[i]<<endl;
    //         return;
    //     }
    // }
 
    
 
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