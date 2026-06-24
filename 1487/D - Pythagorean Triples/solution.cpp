//D. Pythagorean Triples
 
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
a2+b2=c2
a2-b=c
=> b2+b=c2-c
=> c2-b2=b+c
=> c-b=1
 
all the triplet among which 2 no has a difference of 1 will satisfy
3 4 5
5 12 13
7 24 25
9 40 41
11 60 61
 
 
observe the pattern 5 13 25 41 61
diff => 8 12 16 20....
 
Easyyy
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int n;
    cin >> n;
    int a=5;
    int i=1;
    while(a<=n){ 
        i++;
        a=a+4*i;
    }
    cout<<i-1<<endl;
    
    
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