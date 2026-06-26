//B. Sherlock and his girlfriend
 
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
for every case the colors needed will be 2 
except n=1 and n=2
n=1 -> 1
n=2 -> 1
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int n;
    cin >> n;
    if(n==1){
        cout<<1<<endl;
        cout<<1<<endl;
        return;
    }
    if(n==2){
        cout<<1<<endl;
        cout<<1<<" "<<1<<endl;
        return;
    }
    cout<<2<<endl;
    for(int i=2;i<=n+1;i++){
        int a=0;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                a=1;
                break;
            }
        }
        if(a==0){
            cout<<1<<" ";
        }
        else{
            cout<<2<<" ";
        }
    }
    cout<<endl;
    
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