//B. T-primes
 
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
Now the approach is 
if a number has 3 factors that means it's square of prime number
OBSERVE IT!!!
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
    // for(int j=0;j<n;j++){
    //     int count=2;
    //     for(int i=2;i<arr[j]-1;i++){
    //         if(arr[j]%i==0){
    //             count++;
    //         }
    //         else if(count>3){
    //             cout<<"NO"<<endl;
    //             break;
    //         }
    //     }
    //     if(count==3){
    //         cout<<"YES"<<endl;
    //     }
    //     if(count<3){
    //         cout<<"NO"<<endl;
    //     }
    // }
    
    for(int i=0;i<n;i++){
        int a=sqrt(arr[i]);
        if(arr[i]==1){
            cout<<"NO"<<endl;
            continue;
        }
        if(a*a!=arr[i]){
            cout<<"NO"<<endl;
            continue;
        }
        int x=0;
        for(int j=2;j*j<=a;j++){
            if(a%j==0){
                x=1;
                break;
            }
        }
        if(x==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
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