//D. Hexagons!
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
6 + 12 + 18     +1
6(1 +2 + 3 .... n) +1
6*Sn + 1
3*n*(n+1) +1
 
*/
void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
 
signed main() {
    fast_io();
    int n;
    cin>>n;
    int sum=1;
    sum+=3*n*(n+1);
    cout<<sum<<endl;
       
    return 0;
}