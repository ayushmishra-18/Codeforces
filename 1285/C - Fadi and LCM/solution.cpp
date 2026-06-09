//C. Fadi and LCM
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
lcm(a,b) * gcd(a,b) = a*b
*/
 
void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
 
void solve() {
    int n;
    cin>>n;
    int a=0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            a=1;
        }
    }
    if(a==0){
        cout<<1<<" "<<n<<endl;
        return;
    }
    int b=0,c=0;
    int b1=0,c1=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            b=i;
            c=n/i;
            if(__gcd(c,b)==1){
                b1=b;
                c1=c;
                
            }
        }
    }
    cout<<b1<<" "<<c1<<endl;
    
}
 
signed main() {
    fast_io();
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}