//A. Olesya and Rodion
 
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
    int n,m;
    cin>>n>>m;
    if(m==10){
        if(n==1){
            cout<<-1<<endl;
        }
        else{
            cout<<1;
            for(int i=1;i<n;i++){
                cout<<0;
            }
        }
    }
    else{
        for(int i=0;i<n;i++){
            cout<<m;
        }
    }
    
    
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