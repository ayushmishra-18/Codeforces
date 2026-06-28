//C. Pythagorean Triples
 
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
3 4 5
5 12 13
7 24 25
9 40 41
11 60 61
every triplet has 2 odd and 1 even no
 
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int n;
    cin >> n;
    if(n==1 || n==2){
        cout<<-1<<endl;
        return;
    }
    if(n%2==0){
        cout<<(n*n/4-1)<<" "<<(n*n/4+1)<<endl;
        return;
    }
    else{
        cout<<((n*n-1)/2)<<" "<<((n*n+1)/2)<<endl;
        return;
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