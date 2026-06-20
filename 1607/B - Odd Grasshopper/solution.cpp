//B. Odd Grasshopper
 
#include<bits/stdc++.h>
using namespace std;
#define int long long int 
signed main(){
    int t;
    cin>>t;
    while(t--){
        int x,n;
        cin>>x>>n;
        int d=0;
        if(n%4==1){
            d=-n;
        } 
        else if(n%4==2){
            d=1;
        } 
        else if(n%4==3) {
            d=n+1;
        } 
        else{
            d=0;
        }
        if(x%2==0){
            cout<<x+d<<endl;
        }
        else{
            cout<<x-d<<endl;
        }
    }
}