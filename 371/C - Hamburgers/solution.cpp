//C. Hamburgers
 
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
Good Problem 
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    string s;
    cin>>s;
    vi kitchen(3);
    for (int i = 0; i < 3; i++) {
        cin >> kitchen[i];
    }
    vi shop(3);
    for (int i = 0; i < 3; i++) {
        cin >> shop[i];
    }
    int n;
    cin >> n;
    vi arr(3,0);
    for(int i=0;i<s.size();i++){
        if(s[i]=='B'){
            arr[0]++;
        }
        if(s[i]=='S'){
            arr[1]++;
        }
        if(s[i]=='C'){
            arr[2]++;
        }
    }
    int l=0;
    int h=1e13;
    int ans=0;
    while(l<=h){
        int mid=l+(h-l)/2;
        int cost=0;
        for(int i=0;i<3;i++){
            int need=arr[i]*mid;
            int buy=max(0LL,need-kitchen[i]);
            cost+=buy*shop[i];
        }
        if(cost<=n){
            ans=mid;
            l=mid+1;
        }
        if(cost>n){
            h=mid-1;
        }
    }
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