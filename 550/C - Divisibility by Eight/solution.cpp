//C. Divisibility by Eight
 
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
0 8 16 24 32 40 48 56 64 72 80 88 96 104 112 120 
 
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    string s;
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++){
        if((s[i]-'0')%8==0){
            cout<<"YES"<<endl;
            cout<<s[i]<<" ";
            cout<<endl;
            return;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int a=(s[i]-'0')*10+(s[j]-'0');
            if(a%8==0){
                cout<<"YES"<<endl;
                cout<<a<<" ";
                cout<<endl;
                return;
            }
 
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                int a=(s[i]-'0')*100+(s[j]-'0')*10+(s[k]-'0');
                if(a%8==0){
                    cout<<"YES"<<endl;
                    cout<<a<<" ";
                    cout<<endl;
                    return;
                }
            }
        }
    }
    cout<<"NO"<<endl;
    
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