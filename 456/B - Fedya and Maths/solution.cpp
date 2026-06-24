//B. Fedya and Maths
 
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
1n+2n+3n+4n mod 5 
n=4
-> (1+16+81+256)%5 => 4 
2 4 8 16 32 64 128 256 512 1024
3 9 27 81 243 729 
1n%5 -> 1
2n%5 -> 2 or 4 or 3 or 1 or 2
3n%5 -> 3 or 4 or 2 or 1 or 3
4n%5 -> 4 or 1 or 4 or 1
 
because n is upto 10^10^5 -> we cannot store it
Very nice problem
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    string s;
    cin>>s;
    int m=s.size();
    int n=0;
    if(m>1){
        n=(s[m-2]-'0')*10+(s[m-1]-'0');
    }
    else{
        n=(s[0]-'0');
    }
    int a=0,b=0,c=0;
    if(n%4==1){
        a=2;
        b=3;
        c=4;
    }
    else if(n%4==2){
        a=4;
        b=4;
        c=1;
    }
    else if(n%4==3){
        a=3;
        b=2;
        c=4;
    }
    else if(n%4==0){
        a=1;
        b=1;
        c=1;
    }
    int ans=1+a+b+c;
    cout<<ans%5<<endl;
    
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