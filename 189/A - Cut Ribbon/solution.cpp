//A. Cut Ribbon
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
 
*/
 
void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
 
void solve() {
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int count=0;
    for(int i=0;i*a<=n;i++) {
        for(int j=0;i*a+j*b<=n;j++){
            int rem=n-(i*a+j*b);
            if(rem%c==0) {
                int z=rem/c;
                count=max(count,i+j+z);
            }
        }
    }
    cout<<count<<endl;
    
}
 
signed main() {
    fast_io();
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}