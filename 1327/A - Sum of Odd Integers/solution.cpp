//A. Sum of Odd Integers
 
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
    int n,k;
    cin>>n>>k;
    if((n%2==0 && k%2!=0) ||(n%2!=0 && k%2==0) ||(n<k*k)){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
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