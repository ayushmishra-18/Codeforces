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
        int a,b;
        cin>>a>>b;
        int c=max(a,b);
        int d=min(a,b);
        cout<<max(c,2*d)*max(c,2*d)<<endl;
    }
    return 0;
}