#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
 
signed main() {
    fast_io();
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        if(2*l<=r){
            cout<<l<<" "<<2*l<<endl;
        }
        else{
            cout<<-1<<" "<<-1<<endl;
        }
        
    }
    return 0;
}