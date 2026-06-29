//C. Grandma Capa Knits a Scarf
 
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
 
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin>>s;
    int ans=n+1;
    for(int i=0;i<26;i++){
        int l=0;
        int r=n-1;
        int count=0;
        while(l<=r){
            if(s[l]==s[r]){
                l++;
                r--;
            }
            else if(s[l]==char('a'+i)){
                count++;
                l++;
            }
            else if(s[r]==char('a'+i)){
                count++;
                r--;
            }
            else{
                count=n+1;
                break;
            }
        }
        ans=min(ans,count);
    }
    if(ans==n+1){
        ans=-1;
    }
    cout<<ans<<endl;
 
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