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
        int x[3];
        for(int i=0;i<3;i++){
            cin>>x[i];
        }
        sort(x,x+3);
        if(x[1]==x[2]){
            cout<<"YES"<<endl;
            cout<<x[0]<<" "<<x[0]<<" "<<x[1]<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
 
    }
    return 0;
}