//A. Young Physicist
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
Simple
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
    int a=0,b=0,c=0;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        a=a+x;
        b=b+y;
        c=c+z;
    }
    if(a==0 && b==0 && c==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}