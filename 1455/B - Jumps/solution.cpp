//B. Jumps
 
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
Either curr+k or curr-1
0->1->3->6->10->15->21->28 => x(x+1)/2
x=6
0->1->3->6
x=7
0->1->2->3->2->7
x=8
0->1->3->6->10->9->8
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int x;
    cin >> x;
    if(x==1){
        cout<<1<<endl;
        return;
    }
    int i=0;
    while(i*(i+1)/2<x){
        i++;
    }
    if(i*(i+1)/2==x+1){
        i++;
    }
    cout<<i<<endl;
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