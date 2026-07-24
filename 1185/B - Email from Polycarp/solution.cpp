//B. Email from Polycarp
 
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
 
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    string s,t;
    cin>>s>>t;
    string ans="";
    int j=0;
    for(int i=0;i<t.size();i++){
        if(s[j]==t[i]){
            ans+=t[i];
            j++;
 
        }
        else if(t[i]!=t[i-1]){
            cout<<"NO"<<endl;
            return;
        }
    }
    if(ans!=s){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    
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