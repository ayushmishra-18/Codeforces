//B. Box
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define double long double
#define pb push_back
#define all(v) v.begin(), v.end()
#define rall(a) a.rbegin(),a.rend()
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (((a) / gcd(a,b)) * (b))
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
    vi brr(n);
    vi crr(n+1,0);
    brr[0]=arr[0];
    crr[arr[0]]=1;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1]){
            brr[i]=arr[i];
            crr[arr[i]]=1;
        }
    }
    int mex=1;
    for(int i=0;i<n;i++){
        if(brr[i]==0){
            while(crr[mex]==1){
                mex++;
            }
            if(mex>arr[i]){
                cout<<-1<<endl;
                return;
            }
            brr[i]=mex;
            crr[mex]=1;
        }
    }
    for(int i=0;i<n;i++){
        cout<<brr[i]<<" ";
    }
    cout<<endl;
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