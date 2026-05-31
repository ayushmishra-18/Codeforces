//A. K-divisible Sum
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
n->slot k->sum
n=8  k=17
k/n=2 k%n=1
2 2 2 2 2 2 2 2
3 2 2 2 2 2 2 2  -> 3
 
 
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
        int n,k;
        cin>>n>>k;
 
        if(n>=k){
            int f=ceil(1.0*n/k);
            k=k*f;
            int val=ceil(1.0*k/n);
            cout<<val<<endl;
        }
        else{
            int val=ceil(1.0*k/n);
            cout<<val<<endl;;
        }
        
    }
    return 0;
}