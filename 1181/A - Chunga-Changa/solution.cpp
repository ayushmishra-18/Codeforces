//A. Chunga-Changa
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
minimize the no of chizhiks exchange
x->sasha chizhiks
y->masha chizhiks
z->coconut cost
check if x amt can buy integer no of coconut and y too.....
 
*/
void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
 
signed main() {
    fast_io();
    int x,y,z;
    cin>>x>>y>>z;
    if(x%z==0 || y%z==0){
        cout<<(x/z)+(y/z)<<" "<<0<<endl;
    }
    else{
        if(y%z>x%z){
            swap(x,y);
        }
        int a=z-(x%z);
        if((y%z)>=a){
            y=y-a;
            x=x+a;
            cout<<(x/z)+(y/z)<<" "<<a<<endl;
        }
        else{
            cout<<(x/z)+(y/z)<<" "<<0<<endl;
        }
    }    
    return 0;
}