//C. Long Multiplication
 
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
3516 3982 -> 3912 3586
max product => the number should be close to each other
we can give the first max digit to n and later on to m
 
*/
 
void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
void solve() {
    string n,m;
    cin>>n;
    cin>>m;
    int a=0;
    for(int i=0;i<n.size();i++){
        if(n[i]!=m[i]){
            a=i;
            if(n[i]<m[i]){
                swap(n[i],m[i]);
            }
            break;
        }
    }
    for(int i=a+1;i<n.size();i++){
        if(n[i]>m[i]){
            swap(n[i],m[i]);
        }
    }
    cout<<n<<endl;
    cout<<m<<endl;
    
    
    
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