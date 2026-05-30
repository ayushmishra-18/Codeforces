//A. Boboniu Likes to Color Balls
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
r g b w
-1 -1 -1 +3
 sooo if wc was even it will become odd.
 if wc was odd it will become even.
 
 therefore each of their freq must be even except one -> white
 
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
        int r,g,b,w;
        cin>>r>>g>>b>>w;
        int odd=0;
        if(r%2!=0){
            odd++;
        }
        if(g%2!=0){
            odd++;
        }
        if(b%2!=0){
            odd++;
        }
        if(w%2!=0){
            odd++;
        }
        if(odd==2){
            cout<<"NO"<<endl;
        }
        else if(odd>=3 && (r==0 || g==0 || b==0)){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        
    }
    return 0;
}