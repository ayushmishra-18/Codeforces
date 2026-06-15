//A. Pashmak and Garden
 
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
3 cases -> points on vertical line or horizontal line or diagonal
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int x1,y1,x2,y2;
    cin >> x1>>y1>>x2>>y2;
    int x=abs(x1-x2);
    int y=abs(y1-y2);
    if(x1==x2){
        cout<<x1+y<<" "<<y1<<" "<<x2+y<<" "<<y2<<endl;
    }
    else if(y1==y2){
        cout<<x1<<" "<<y1+x<<" "<<x2<<" "<<y2+x<<endl;
    }
    else if(x==y){
        cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<endl;
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