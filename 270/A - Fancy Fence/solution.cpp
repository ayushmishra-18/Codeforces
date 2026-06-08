//A. Fancy Fence
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
sum of all interior angles = (n-2)*180
each angle = (n-2)*180/n
*/
 
void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
 
void solve() {
    int n;
    cin>>n;
    if(360%(180-n)==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    
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