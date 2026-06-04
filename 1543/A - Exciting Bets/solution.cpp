//A. Exciting Bets
 
#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int gcd,moves;
        if(a==b){
            cout<<0<<" "<<0<<endl;
        }
        
        else{
            gcd=abs(a-b);
            moves=min(b%gcd,gcd-b%gcd);
            cout<<gcd<<" "<<moves<<endl;
        }
    }
}