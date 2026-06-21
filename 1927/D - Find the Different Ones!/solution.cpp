//D. Find the Different Ones!
 
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
    int n;
    cin >> n;
    vi arr(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    vi forme(n+1,-1);
    for(int i=2;i<=n;i++){
        if(arr[i]!=arr[i-1]){
            forme[i]=i-1;
        }
        else{
            forme[i]=forme[i-1];
        }
    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        int a=0;
        if(forme[r]>=l){
            cout<<forme[r]<<" "<<r<<endl;
        }
        else{
            cout<<-1<<" "<<-1<<endl;
        }
    }
    cout<<endl;
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