//B. Sort the Array
 
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
Easyy
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int n;
    cin >> n;
    vi arr(n+1,0);
    for (int i = 1; i < n+1; i++) {
        cin >> arr[i];
    }
    int l=1,r=1;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i+1]){
            l=i;
            break;
        }
    }
    r=l;
    while(r<n && arr[r]>arr[r+1]){
        r++;
    }
    reverse(arr.begin()+l,arr.begin()+r+1);
    if(is_sorted(all(arr))){
        cout<<"yes"<<endl;
        cout<<l<<" "<<r<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
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