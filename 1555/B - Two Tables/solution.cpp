//B. Two Tables
 
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
 
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int W,H;
    cin >> W>>H;
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    int w,h;
    cin>>w>>h;
    int fw=x2-x1;
    int fh=y2-y1;
    if(fw+w>W && fh+h>H){
        cout<<-1<<endl;
        return;
    }
    int ans=INF;
    if(fw+w<=W){
        int r=max((int)0,w-x1);
        int l=max((int)0,w-(W-x2));
        ans=min({ans,r,l});
    }
    if(fh+h<=H){
        int u=max((int)0,h-y1);
        int d=max((int)0,h-(H-y2));
        ans=min({ans,u,d});
    }
    cout<<fixed<<setprecision(6)<<ans<<endl;
    
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