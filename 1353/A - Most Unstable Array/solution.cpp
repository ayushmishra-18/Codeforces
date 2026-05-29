//A. Most Unstable Array
 
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
        if(n==1){
            cout<<0<<endl;
        }
        else if(n<3){
            cout<<m<<endl;
        }
        else{
            cout<<2*m<<endl;
        }
    }
    return 0;
}