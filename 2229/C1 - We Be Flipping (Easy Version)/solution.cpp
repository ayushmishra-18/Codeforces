//C1. We Be Flipping (Easy Version)
 
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
make all elements negative
-1 -2 3 -5 4
1 2 -3 5 -4
-1 -2 3 -5 -4
1 2 -3 -5 -4
-1 -2 -3 -4 -5
 
 
-1 -2 3 -4 5 -6
1 2 -3 4 -5 -6
-1 -2 3 -4 -5 -6
1 2 -3 -4 -5 -6
-1 -2 -3 -4 -5 -6
 
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int n;
    cin >> n;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vi brr;
    int a=0;
    for(int i=n-1;i>=0;i--){
        int b;
        if(a%2==1){
            b=-arr[i];
        }
        else{
            b=arr[i];
        }
        if(b>0){
            brr.pb(i+1);
            a++;
        }
    }
    cout<<brr.size()<<endl;
    for(int i=0;i<brr.size();i++){
        cout<<brr[i]<<" ";
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