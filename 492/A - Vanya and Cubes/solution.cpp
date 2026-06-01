//A. Vanya and Cubes
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
1
1+2
1+2+3
1+2+3+4
 
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
    int level=1;
    int next=0;
    while(true){
        next=next+level;
        if(t>=next){
            t=t-next;
            level++;
        }
        else{
            break;
        }
 
    }
    cout<<level-1<<endl;
    return 0;
}