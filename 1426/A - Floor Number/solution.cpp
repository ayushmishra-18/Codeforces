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
        int n,x;
        cin>>n>>x;
        int a=2;
        if(n<=2){
            cout<<1<<endl;
        }
        else{
            cout<<a+(n-3)/x<<endl;
        }
        
    }
    return 0;
}