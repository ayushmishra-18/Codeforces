//A. Road To Zero
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
Simple
*/
 
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
        int x,y,a,b;
        cin>>x>>y>>a>>b;
        int m1=b*min(x,y)+a*abs(x-y);
        int m2=a*(x+y);
        cout<<min(m1,m2)<<endl;
 
        
    }
    return 0;
}