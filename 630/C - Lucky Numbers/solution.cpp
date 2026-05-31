//C. Lucky Numbers
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
1->(7 8) 2
2->2+(77 78 87 88) 4 =>6
3->6+(777 787 778 788 878 887 877 888)  8 =>14
4->14+(7777 7778 7788 7888 8788 8778 8777 8888) 8 =>22
5->
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
    int a=1;
    for(int i=0;i<=n;i++){
        a=a*2;
    }
    int ans=a-2;
    cout<<ans<<endl;
        
    
    return 0;
}