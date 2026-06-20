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
s = 10110 k=2
=> 10010 -> NO
 
s = 1010 k=2
=> 1000
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int n,k;
    cin >> n>>k;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            s[i]='0';
            if(i+k<n){
                if(s[i+k]=='0'){
                    s[i+k]='1';
                }
                else{
                    s[i+k]='0';
                }
            }
            else{
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
    
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