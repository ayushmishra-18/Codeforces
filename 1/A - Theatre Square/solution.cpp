//A. Theatre Square
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
 
*/
void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
 
signed main() {
    fast_io();
    int n,m,a;
    cin>>n>>m>>a;
    int ans;
    ans=(ceil(1.0*n/a)*ceil(1.0*m/a));        
    cout<<ans;
    return 0;
}