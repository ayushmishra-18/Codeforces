//A. Double Cola
 
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
reduce n to 1 to 5
by subtracting -5 and dividing by 2
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int n;
    cin >> n;
    n--;
    while(n>=5){
        n=(n-5)/2;
    }
    if(n==0){
        cout<<"Sheldon";
    }
    else if(n==1){
        cout<<"Leonard";
    }
    else if(n==2){
        cout<<"Penny";
    }
    else if(n==3){
        cout<<"Rajesh";
    }
    else if(n==4){
        cout<<"Howard";
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