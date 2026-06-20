//M. Minimum LCM
 
#include<bits/stdc++.h>
using namespace std;
#define int long long int 
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a=1,b;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                a=n/i;
                break;
            }
        }
        b=n-a;
        cout<<a<<" "<<b<<endl;
    }
}