//A. Domino
 
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
easyy 
even sum + even sum = even
odd sum + odd sum = even
differnet parity => odd
 
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int n;
    cin >> n;
    vector<pair<int,int>> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first>>arr[i].second;
    }
    int sum1=0,sum2=0;
    for(int i=0;i<n;i++){
        sum1+=arr[i].first;
        sum2+=arr[i].second;
    }
    if(sum1%2==0 && sum2%2==0){
        cout<<0<<endl;
        return;
    }
    if((sum1+sum2)%2!=0){
        cout<<-1<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        if((arr[i].first+arr[i].second)%2!=0){
            cout<<1<<endl;
            return;
        }
    }
    cout<<-1<<endl;
    return;
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