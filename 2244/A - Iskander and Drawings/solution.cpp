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
 
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin>>s;
    int a=0;
    int b=0;
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        if(ch=='#'){
            a++;
            b=max(a,b);
        }
        else{
            a=0;
        }
    }
    int count=0;
    while(b>0){
        count++;
        b=b-2;
    }
    cout<<count<<endl;
    
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