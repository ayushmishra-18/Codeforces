//D. Buying Shovels
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
n = 999999733  k = 999999732
we have two option either take 1 pack of 999999733 shovels
or 999999733 pack of 1 shovel
and the first one is not possible
 
*/
 
void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
 
void solve() {
    int n,k;
    cin>>n>>k;
    int a=1;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            if(i<=k){
                a=max(a,i);
            }
            if((n/i)<=k){
                a=max(a,n/i);
            }
        }
        
    }
    cout<<n/a<<endl;
    
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