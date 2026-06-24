//C. Product of Three Numbers
 
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
A num can be product of three num 
find 2 smallest divisor 
the the third will be n/a*b
and all the three should be distinct
 
64 -> 2 4 8 16 32 64
32 -> 2 4 8 16 32
8 -> 2 4 8
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int n;
    cin >> n;
    vi arr;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            arr.pb(i);
            if(i!=n/i){
                arr.pb(n/i);
            }
        }
    }
    if(arr.size()<2){
        cout<<"NO"<<endl;
        return;
    }
    sort(all(arr));
    int a=arr[0];
    for(int i=1;i<arr.size();i++){
        int b=arr[i];
        if((n/a)%b==0){
            int c=n/(a*b);
            if(c>1 && c!=a && c!=b){
                cout<<"YES"<<endl;
                cout<<a<<" "<<b<<" "<<c<<endl;
                return;
            }
        }
 
    }
    cout<<"NO"<<endl;
    
    
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