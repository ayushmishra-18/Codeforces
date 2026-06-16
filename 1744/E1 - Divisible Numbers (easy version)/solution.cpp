//E1. Divisible Numbers (easy version)
 
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
x=>(a,c] and y=>(b,d]
x*y % a*b == 0
 
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int a,b,c,d;
    cin >> a>>b>>c>>d;
    vi arr;
    for(int i=1;i*i<=a;i++){
        if(a%i==0){
            arr.pb(i);
            if(i*i!=a){
                arr.pb(a/i);
            }
        }
    }
    vi brr;
    for(int i=1;i*i<=b;i++){
        if(b%i==0){
            brr.pb(i);
            if(i*i!=b){
                brr.pb(b/i);
            }
        }
    }
    
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<brr.size();j++){
            int z=arr[i]*brr[j];
            int req=(a*b)/z;
            int x=(a/z+1)*z;
            int y=(b/req+1)*req;
            if(x<=c && y<=d){
                cout<<x<<" "<<y<<endl;
                return;
            }
        }
    }
    cout<<-1<<" "<<-1<<endl;
    
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