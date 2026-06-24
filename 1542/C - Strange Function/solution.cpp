//C. Strange Function
 
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
1 -> 2
2 -> 3
3 -> 2
4 -> 3
5 -> 2
6 -> 4
7 -> 2
8 -> 3
Good Problem
Editorial Formula
sum = n+ sum(n/lcm(1 2 3 .... i)) i>=1 untill LCM>n
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int n;
    cin >> n;
    int sum=n%MOD;
    int a=1;
    int i=1;
    while(true){
        int g=__gcd(a,i);
        a=(a/g)*i;
        if(a>n){
            break;
        }
        sum=(sum+(n/a))%MOD;
        i++;
        
    }
    cout<<sum<<endl;
 
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