//A. Donut Shops
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
1st shop -> 1 donut => a 
2nd shop -> box of b donut => c
if c<=a -> print -1 for 1st shop
else print 1 for 1st shop
if c>=a*b -> print -1 for 2nd shop
else print b for 2nd shop
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
        int a,b,c;
        cin>>a>>b>>c;
        int ans1=-1,ans2=-1;
        if(a<c){
            ans1=1;
        }
        if(c<a*b){
            ans2=b;
        }
        cout<<ans1<<" "<<ans2<<endl;
    }
 
    return 0;
}