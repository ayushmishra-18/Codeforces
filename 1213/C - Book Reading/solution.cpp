//C. Book Reading
 
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
Optimal approach
last digits of multiples of any no repeats after 10 multiples
3-> 3 6 9 2 5 8 1 4 7 0 3
so take sum of 10 unit digits....
 
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int n,m;
    cin >> n>>m;
    if(n<m){
        cout<<0<<endl;
        return;
    }
    int k=n/m;
    vi arr(10);
    int sum=0;
    for(int i=1;i<=10;i++){
        arr[i-1]=(i*m)%10;
        sum+=arr[i-1];
    }
    int x=k/10;
    int y=k%10;
    int ans=sum*x;
    for(int i=0;i<y;i++){
        ans+=arr[i];
    }
    cout<<ans<<endl;
    
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