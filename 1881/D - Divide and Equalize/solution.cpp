//D. Divide and Equalize
 
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
find prime divisors of all elements
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
    map<int,int>mp;
    for(int i=0;i<n;i++){
        for(int j=2;j*j<=arr[i];j++){
            while(arr[i]%j==0){
                mp[j]++;
                arr[i]/=j;
            }
        }
        if(arr[i]>1){
            mp[arr[i]]++;
        }
    }
    int a=0;
    for(auto i:mp){
        if(i.second%n!=0){
            a=1;
        }
    }
    if(a==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
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