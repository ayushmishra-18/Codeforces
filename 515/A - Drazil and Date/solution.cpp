//A. Drazil and Date
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
0,0 -> a,b
distance must be greater than or equal to a+b
ALSOOOO the no of wrong moves = no of right moves
Means total extra moves must be even
*/
 
void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
 
signed main() {
    fast_io();
    int a,b,s;
    cin>>a>>b>>s;
    int extra=s-abs(a)-abs(b);
    if(extra<0 || extra%2!=0){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
 
    return 0;
}