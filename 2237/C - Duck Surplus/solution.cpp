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
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i=0;i<n-1;i++){
        while(true){
            if(arr[i]>arr[i+1]){
                int a=arr[i+1];
                arr[i+1]=arr[i]+arr[i+1];
                arr[i]=a;
            }
            else{
                break;
            }
        }
        if(arr[i]>arr[i+1]){
            break;
        }
    }
    int maxi=*max_element(all(arr));
    cout<<maxi<<endl;
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