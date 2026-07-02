//C. Wrong Addition
 
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
a+b=s
  17236
+ 03465
1106911
 
we need b
s-a
if a[i]>s consider two digits in s
otherwise single b[i]=s[i]-a
 
use stoll instead of stoi
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    string a,s;
    cin>>a>>s;
    int i=a.size()-1;
    int j=s.size()-1;
    string b="";
    while(j>=0){
        int x;
        if(i>=0){
            x=a[i]-'0';
        }
        else{
            x=0;
        }
        int y=s[j]-'0';
        if(y>=x){
            b+=to_string(y-x);
            i--;
            j--;
        }
        else{
            if(j==0){
                cout<<-1<<endl;
                return;
            }
            int z=(s[j-1]-'0')*10+y;
            int w=z-x;
            if(w<0 || w>9){
                cout<<-1<<endl;
                return;
            }
            b+=to_string(w);
            i--;
            j=j-2;
        }
    }
    if(i>=0){
        cout<<-1<<endl;
        return;
    }
    reverse(all(b));
    int ans=stoll(b);
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