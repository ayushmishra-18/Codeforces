//B. Kefa and Company
 
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
 
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int n,d;
    cin >> n>>d;
    vector<pair<int,int>>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
    }
    sort(all(arr));
    vi pref(n+1,0);
    for(int i=0;i<n;i++){
        pref[i+1]=pref[i]+arr[i].second;
    }
 
    int maxx=0;
    for(int i=0;i<n;i++){
        int l=i;
        int h=n-1;
        int ans=i;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(arr[mid].first-arr[i].first<d){
                ans=mid;
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        int curr=pref[ans+1]-pref[i];
        maxx=max(maxx,curr);
        
    }
    cout<<maxx<<endl;
    
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