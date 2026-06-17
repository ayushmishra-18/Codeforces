//E. Mirror Grid
 
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
(i,j) -> (j,n-1-i) -> (n-1-i,n-1-j) -> (n-1-j,i)
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int n;
    cin >> n;
    vector<string>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    for(int i=0;i<n/2;i++){
        for(int j=i;j<n-1-i;j++){
            char c1=arr[i][j];
            char c2=arr[j][n-1-i];
            char c3=arr[n-1-i][n-1-j];
            char c4=arr[n-1-j][i];
            int one=(c1-'0')+(c2-'0')+(c3-'0')+(c4-'0');
            int zero=4-one;
            count+=min(one,zero);
        }
    }
    cout<<count<<endl;
    
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