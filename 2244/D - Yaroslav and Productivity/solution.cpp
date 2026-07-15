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
    int n,m;
    cin >> n>>m;
    vi arr(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    vi brr(m);
    for(int i=0;i<m;i++){
        cin>>brr[i];
    }
    sort(all(brr));
    int a=0;
    int ans=0;
    int j=0;
    for(int i=1;i<=n;i++){
        a+=arr[i];
        if(j<m && i==brr[j]){
            ans+=abs(a);
            a=0;
            j++;
        }
    }
    ans+=a;
    cout<<ans<<endl;
    
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