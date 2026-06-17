//C. Robin Hood in Town
 
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
    vi arr(n);
    int sum=0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum+=arr[i];
    }
    if(n<3){
        cout<<-1<<endl;
        return;
    }
    sort(all(arr));
    int l=0;
    int h=INF;
    int ans=-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        double avg=(double)(sum+mid)/(2.0*n);
        int count=lower_bound(all(arr),avg)-arr.begin();
        if(count>n/2){
            ans=mid;
            h=mid-1;
        }
        else{
            l=mid+1;
        }
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