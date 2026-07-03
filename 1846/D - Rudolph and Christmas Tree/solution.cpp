//D. Rudolph and Christmas Tree
 
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
isoscele triangle -> base d height h
area=d*h/2
hi+1-hi>=h => not intersect
else intersect -> trapezium 
=> base d height hi+1-hi upper side d*(h-hi+1-hi)/h
area of trapezium = (hi+1-hi)*(d+upperside)/2
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    double n,d,h;
    cin >> n>>d>>h;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    double area=d*h/2.0;
    for(int i=0;i<n-1;i++){
        if(arr[i+1]-arr[i]>=h){
            area+=d*h/2.0;
        }
        else{
            double upper=d*(arr[i]+h-arr[i+1])/h;
            double h2=arr[i+1]-arr[i];
            area+=(d+upper)/2.0*h2;
        }
    }
    cout<<fixed<<setprecision(6)<<area<<endl;
    
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