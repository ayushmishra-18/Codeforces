#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
two options - ai or not ai
min time => min(time,timeai)
*/
 
void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
 
void solve() {
    int n,x,y,z;
    cin>>n>>x>>y>>z;
    int li=0;
    int ti=0;
    while(li<n){
        ti++;
        li+=(x+y);
    }
    int liai=0;
    int tiai=0;
    while(liai<n){
        tiai++;
        if(tiai<=z){
            liai+=x;
        }
        else{
            liai+=(x+(10*y));
        }
 
    }
    
    cout<<min(ti,tiai)<<endl;
    
    
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