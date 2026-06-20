//B. Make AP
 
#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int x=2*b-c;
        int y=(a+c)/2;
        if((a+c)%2!=0){
            y=0;
        }
        int z=2*b-a;
        int check=0;
        if((x>0 && x%a==0) || (y>0 && y%b==0) || ( z>0 && z%c==0)){
            cout<<"YES"<<'
';
        }
        else{
            cout<<"NO"<<'
';
        }   
    }
}