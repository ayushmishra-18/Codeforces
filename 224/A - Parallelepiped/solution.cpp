//A. Parallelepiped
 
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
A1 = a*b  A2 = b*c  A3 = c*a
A1*A2*A3 = a2b2c2
vol=sqrt(A1*A2*A3)=a*b*c
a=Vol/(b*c) => Vol/A2
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int A1,A2,A3;
    cin >> A1>>A2>>A3;
    int vol=sqrt(A1*A2*A3);
    int a=vol/A2;
    int b=vol/A3;
    int c=vol/A1;
    int ans=4*(a+b+c);
    cout<<ans<<endl;
    
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