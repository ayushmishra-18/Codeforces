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
    int n,c;
    cin >> n>>c;
    vi arr(n);
    int sum1=0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum1+=arr[i];
    }
    vi brr(n);
    int sum2=0;
    for(int i=0;i<n;i++){
        cin>>brr[i];
        sum2+=brr[i];
    }
    int diff=sum1-sum2;
    int a=0;
    for(int i=0;i<n;i++){
        if(arr[i]<brr[i]){
            a=1;
            break;
        }
    }
    if(a==0){
        cout<<diff<<endl;
        return;
    }
    sort(all(arr));
    sort(all(brr));
    int b=0;
    for(int i=0;i<n;i++){
        if(arr[i]<brr[i]){
            b=1;
            break;
        }
    }
    if(b==0){
        cout<<diff+c<<endl;
    }
    else{
        cout<<-1<<endl;
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