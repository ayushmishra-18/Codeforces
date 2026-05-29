//A. Buy a Shovel
 
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
    
    int k,r;
    cin>>k>>r;
    int i=1;
    while(true){
        if((i*k)%10==0){
            cout<<i<<endl;
            break;
        }
        else if((i*k)%10==r){
            cout<<i<<endl;
            break;
        }
        i++;
    }
        
    
    return 0;
}