//B. Same Parity Summands
 
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
n=a1+a2+a3+.....+ak => k terms 
either all the terms should be odd or all even
odd combination => 1 1 1 1 ..... n-(k-1) = n
even combination => 2 2 2 2 .... n-2*(k-1) = n
 
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int n,k;
    cin >> n>>k;    
    if(n-(k-1)>0 && ((n-(k-1))%2!=0)){
        cout<<"YES"<<endl;
        for(int i=0;i<k-1;i++){
            cout<<1<<" ";
        }
        cout<<n-(k-1)<<endl;;
    }
    else if(n-2*(k-1)>0 && ((n-2*(k-1))%2==0)){
        cout<<"YES"<<endl;
        for(int i=0;i<k-1;i++){
            cout<<2<<" ";
        }
        cout<<n-2*(k-1)<<endl;
 
    }
    else{
        cout<<"NO"<<endl;
    }
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