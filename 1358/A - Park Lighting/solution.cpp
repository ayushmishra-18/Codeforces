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
        int n,m;
        cin>>n>>m;
        if((n*m)%2==0){
            cout<<n*m/2<<endl;
        }
        else{
            cout<<n*m/2+1<<endl;
        }
    }
    return 0;
}