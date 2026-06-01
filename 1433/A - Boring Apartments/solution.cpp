//A. Boring Apartments
 
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
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s[0]-'0';
        int a=s.size();
        if(a==1){
            cout<<10*(n-1)+1<<endl;
        }
        if(a==2){
            cout<<10*(n-1)+3<<endl;
        }
        if(a==3){
            cout<<10*(n-1)+6<<endl;
        }
        if(a==4){
            cout<<10*(n-1)+10<<endl;
        }
                
    }
    return 0;
}