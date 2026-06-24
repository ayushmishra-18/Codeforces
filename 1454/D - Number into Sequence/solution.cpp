//D. Number into Sequence
 
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
if number is prime simply print n
else make a vector of it's divisor
then check by dividing n by it's divisor that how many times it can divide
one with maximum count will become the  answer
 
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
            if(i!=(n/i)){
                arr.pb(n/i);
            }
        }
    }
    if(arr.size()==0){
        cout<<1<<endl;
        cout<<n<<endl;
        return;
    }
    int maxx=0;
    int divisor=0;
    for(int i=0;i<arr.size();i++){
        int d=arr[i];
        int count=0;
        int m=n;
        while(m%d==0){
            count++;
            m/=d;
        }
        if(count>maxx) {
            maxx=count;
            divisor=d;
        }
    }
    if(maxx==1) {
        cout<<1<<endl;
        cout<<n<<endl;
        return;
    }
    cout<<maxx<<endl;
    int curr=n;
    for(int i=0;i<maxx-1;i++){
        cout<<divisor<<" ";
        curr/=divisor;
    }
    cout<<curr<<endl;
 
    
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