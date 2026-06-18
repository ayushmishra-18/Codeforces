//C. Mere Array
 
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
swap ai and aj if gcd(ai,aj) = mini
first check the elements who are not acc to sorted order
and if that element if divisible by mini
 
arr => 4 3 6 6 2 9 -> mini=2
brr => 2 3 4 6 6 9
mismatch -> 4 6 2
check if they are divisible by mini
->YES
 
arr => 7 5 2 2 4
brr => 2 2 4 5 7
mismatch -> 7 5 2 2 4
7 and 5 are not divisible by mini 
->NO
 
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int n;
    cin >> n;
    vi arr(n),brr(n);;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        brr[i]=arr[i];
    }
    int mini=*min_element(all(arr));
    sort(all(brr));
    int a=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=brr[i] && arr[i]%mini!=0){
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
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}