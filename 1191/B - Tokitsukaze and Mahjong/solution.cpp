//B. Tokitsukaze and Mahjong
 
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
the answr is either 0 or 1 or 2
 
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    vector <string> s(3);
    cin>>s[0]>>s[1]>>s[2];
    sort(all(s));
    if(s[0]==s[1] && s[1]==s[2]){
        cout<<0<<endl;
        return;
    }
    if(s[0][1]==s[1][1] && s[1][1]==s[2][1] && s[0][0]+1==s[1][0] && s[1][0]+1==s[2][0]){
        cout<<0<<endl;
        return;
    }
    if(s[0]==s[1] || s[1]==s[2]){
        cout<<1<<endl;
        return;
    }
    if(s[0][1]==s[1][1] && s[1][0]-s[0][0]<=2){
        cout<<1<<endl;
        return;
    }
    if(s[1][1]==s[2][1] && s[2][0]-s[1][0]<=2){
        cout<<1<<endl;
        return;
    }
    if(s[0][1]==s[2][1] && s[2][0]-s[0][0]<=2){
        cout << 1 << endl;
        return;
    }
    cout<<2<<endl;
    
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