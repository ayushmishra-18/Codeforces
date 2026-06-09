#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
n=2
(1 2) (2 1) (2 1) (1 2)
 
n=3
(1 2 3) (2 3 1) (2 3 1) (1 2 3)
 
n=4
(1 2 3 4) (2 3 4 1) (2 3 4 1) (1 2 3 4)
 
*/
 
void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
 
void solve() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    for(int i=2;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<1<<" ";
    for(int i=2;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<1<<" ";
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
    
    
}
 
signed main() {
    fast_io();
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}