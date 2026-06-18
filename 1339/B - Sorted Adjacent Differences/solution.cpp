//B. Sorted Adjacent Differences
 
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
Easy
first make another vector in which we will pushback first the smallest num and then the largest numm
the reverse this vector and print
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
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(all(arr));
    int l=0;
    int r=n-1;
    vi brr;
    while(l<=r){
        if(l==r){
            brr.pb(arr[l]);
            break;
        }
        brr.pb(arr[l]);
        brr.pb(arr[r]);
        l++;
        r--;
    }
    reverse(all(brr));
    for(int i=0;i<n;i++){
        cout<<brr[i]<<" ";
    }
    cout<<endl;
 
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