//A. Cinema Line
 
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
    if(arr[0]!=25){
        cout<<"NO"<<endl;
        return;
    }
    int a=0,b=0;
    for(int i=0;i<n;i++){
        if(arr[i]==25){
            a++;
        }
        else if(arr[i]==50){
            if(a>0){
                a--;
                b++;
            }
            else{
                cout<<"NO"<<endl;
                return;
            }
        }
        else if(arr[i]==100){
            if(b>0 && a>0){
                b--;
                a--;
            }
            else if(a>=3){
                a=a-3;
            }
            else{
                cout<<"NO"<<endl;
                return;
            }
        }
        
    }
    cout<<"YES"<<endl;
 
    
}
 
signed main() {
    fast_io();
    int tc = 1;
    //cin >> tc;
    while(tc--) {
        solve();
    }
    
    return 0;
}