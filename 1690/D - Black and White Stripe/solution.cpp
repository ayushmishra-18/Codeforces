//D. Black and White Stripe
 
#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int l=0;
        int w=0;
        int mw=k;
        for(int i=0;i<n;i++){
            if(s[i]=='W'){
                w++;
            }
            if(i-l+1>k){
                if(s[l]=='W'){
                    w--;
                }
                l++;
            }
            if(i-l+1==k){
                mw=min(mw,w);
            }
        }
    cout<<mw<<endl;
    }
}