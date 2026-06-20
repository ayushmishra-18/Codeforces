//B. Flipping Binary String
 
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
we need even no of 1 
or we can have odd no of 0
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
    int one=0,zero=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            one++;
        }
        else{
            zero++;
        }
    }
    if(one%2==0){
        cout<<one<<endl;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                cout<<i+1<<" ";
                s[i]=0;
            }
        }
        cout<<endl;
    }
    else if(zero%2!=0){
        cout<<zero<<endl;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                cout<<i+1<<" ";
            }
        }
        cout<<endl;
    }
    else{
        cout<<-1<<endl;
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