//B. Make It Ugly
 
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
array is initially beautiful
we need a distinct element at the start or the end
if all elements are same then print -1
Good problem
 
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
    int a=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            a=1;
        }
    }
    if(a==0){
        cout<<-1<<endl;
        return;
    }
    int z=0;
    int y=INF;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[0]){
            z++;
        }
        else{
            y=min(y,z);
            z=0;
        }
    }
    cout<<min(y,z)<<endl;
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