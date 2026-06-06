//B. Left and Down
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
two ways to go from x,y to 0,0 -> left or down
0 <= dx <= k
0 <= dy <= k
 
min cost -> min no of unique pair of dx,dy
 
we want minimum no of pair which is 1 (only 1 pair brings x,y to 0,0)
x = g * dx
y = g * dy
dx = x/g , dy=y/g
also x/g <= k and y/g <= k
 
 
otherwise we make any x,y to 0,0 in 2 operation 
like (0,k) , (k,0)
first we made y coordinate 0 then we made x coordinate 0
 
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
        int a,b,k;
        cin>>a>>b>>k;
        int g=__gcd(a,b);
        if(max(a/g,b/g)<=k){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
        
    }
    return 0;
}