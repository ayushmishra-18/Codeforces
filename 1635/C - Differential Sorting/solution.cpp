//C. Differential Sorting
 
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
    if(arr[n-2]>arr[n-1]){
        cout<<-1<<endl;
        return;
    }
    if(arr[n-1]<0){
        if(is_sorted(all(arr))){
            cout<<0<<endl;
            return;
        }
        else{
            cout<<-1<<endl;
            return;
        }
    }
    cout<<n-2<<endl;
    for(int i=1;i<=n-2;i++){
        cout<<i<<" "<<n-1<<" "<<n<<endl;;
    }
 
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