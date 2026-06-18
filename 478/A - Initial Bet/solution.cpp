//A. Initial Bet
 
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
 
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int n=5;
    //cin >> n;
    vi arr(n);
    int sum=0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum+=arr[i];
    }
    if(sum>=5 && sum%n==0){
        cout<<sum/n<<endl;
    }
    else{
        cout<<-1<<endl;
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