//A1. Heidi Learns Hashing (Easy)
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define double long double
#define pb push_back
#define all(v) v.begin(), v.end()
#define rall(a) a.rbegin(),a.rend()
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (((a) / gcd(a,b)) * (b))
#define endl '
'
 
typedef vector<int> vi;
 
const int INF = 1e18;
const int MOD = 1e9 + 7;
 
/*
x2 + 2xy + x + 1
x2 + (2y + 1)x + 1
 
x=1; 3 + 2y = n
x=2; 7 + 4y = n
 
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int n;
    cin >> n;
    if(n==1 || n==2 || n==3 || n==4){
        cout<<"NO"<<endl;
        return;
    }
    if(n%2!=0){
        cout<<1<<" "<<(n-3)/2<<" "<<endl;
        return;
    }
    if((n-7)%4==0){
        cout<<2<<" "<<(n-7)/4<<" "<<endl;
        return;
    }
    cout<<"NO"<<endl;
 
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