//A. Cheap Travel
 
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
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int cost1=n*a;
    int cost2=((n/m)*b)+(min((n%m)*a,b));
    cout<<min(cost1,cost2);
    
    return 0;
}