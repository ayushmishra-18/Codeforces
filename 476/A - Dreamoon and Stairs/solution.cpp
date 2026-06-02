//A. Dreamoon and Stairs
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
n=10 m=2
2 2 2 2 2 -> 5 moves
2 2 2 2 1 1 -> 6 moves
 
n=13 m=5
2 2 2 2 2 2 1 -> 7 moves
2 2 2 2 2 1 1 1-> 8 moves
2 2 2 2 1 1 1 1 1 -> 9 moves
2 2 2 1 1 1 1 1 1 1 -> 10 moves
 
if m>n -> print -1
else -> res=[n/2] and increment res till res%m==0
*/
 
void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
 
signed main() {
    fast_io();
    int n,m;
    cin>>n>>m;
    if(m>n){
        cout<<-1<<endl;
    }
    else{
        int res=0;
        res=ceil(1.0*n/2);
        while(res%m>0){
            res++;
        }
        cout<<res<<endl;
    }
    
    
    return 0;
}