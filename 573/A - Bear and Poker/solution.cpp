//A. Bear and Poker
 
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
either doublle or triple 
and make them equal
 
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
    int g=arr[0];
    for(int i=1;i<n;i++){
        g=gcd(g,arr[i]);
    }
    for(int i=0;i<n;i++){
        int a=arr[i]/g;
        while(a%2==0){
            a=a/2;
        }
        while(a%3==0){
            a=a/3;
        }
        if(a!=1){
            cout<<"No"<<endl;
            return;
        }        
    }
    cout<<"Yes"<<endl;
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