//B. String LCM
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
baba  ba  -> baba
aa aaa  -> aaaaaa 
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
        string s,t;
        cin>>s>>t;
        int l1=s.size();
        int l2=t.size();
        int lcm=(l1*l2)/__gcd(l1,l2);
        int a1=lcm/l1;
        int a2=lcm/l2;
        string res1,res2;
        for(int i=0;i<a1;i++){
            res1=res1+s;
        }
        for(int i=0;i<a2;i++){
            res2=res2+t;
        }
        if(res1==res2){
            cout<<res1<<endl;
        }
        else{
            cout<<-1<<endl;
        }
 
    }
    return 0;
}