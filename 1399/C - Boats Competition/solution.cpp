//C. Boats Competition
 
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
minimum s -> 2
maximum s -> 2*n
use two pointers -> l=0,h=n-1
 
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
    int count=0;
    for(int s=2;s<=2*n;s++){
        int l=0;
        int h=n-1;
        int curr=0;
        while(l<h){
            if(arr[l]+arr[h]==s){
                curr++;
                l++;
                h--;
            }
            else if(arr[l]+arr[h]<s){
                l++;
            }
            else if(arr[l]+arr[h]>s){
                h--;
            }
        }
        count=max(count,curr);
    }
    cout<<count<<endl;
 
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