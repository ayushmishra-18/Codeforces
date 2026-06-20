//B. Water Lily
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
let depth=x
pythagorus
x2+l2=(x+h)2
x=(l2-h2)/2h
*/
void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
 
signed main() {
    fast_io();
    int h,l;
    cin>>h>>l;
    double x=(l*l-h*h)/(2.0*h);
    cout<<fixed<<setprecision(6)<<x; //ummm something newwww      
    
    return 0;
}