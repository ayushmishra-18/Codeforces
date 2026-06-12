//D. Pair of Topics
 
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
if ai + aj > bi + bj => good
-> ai - bi > bj - aj
-> a1 - bi > -(aj - bj)
-> ci > -cj
-> ci + cj > 0
so we can make two new vector c1 = ai - bi
 
4 8 2 6 2
4 5 4 1 3
=> 0 3 -2 5 -1
=> -2 -1 0 3 5 => 7 pairs
 
 
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int n;
    cin >> n;
    vi arr(n),brr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> brr[i];
    }
    vi crr(n);
    for(int i=0;i<n;i++){
        crr[i]=arr[i]-brr[i];
    }
    sort(all(crr));
    int count=0;
    for(int i=0;i<n;i++){
        auto it=upper_bound(crr.begin()+i+1,crr.end(),-crr[i]);
        count+=(crr.end()-it);
        
    }
    cout<<count<<endl;
    
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