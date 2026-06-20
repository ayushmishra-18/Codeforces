//C. Traffic Light
 
#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        char c;
        cin>>n>>c;
        string s;
        cin>>s;
        string S=s+s;
        int a=0,ans=0,res=0;
        if(c!='g'){
            int i=0;
            while(i<2*n){
                if(S[i]==c && a==0){
                    a=1;
                }
                else if(S[i]=='g' && a==1){
                    a=0;
                    ans++;
                    res=max(res,ans);
                    ans=0;
                }
                else if(S[i]!='g' && a==1){
                    ans++;
                }   
                i++;             
            } 
            cout<<res<<endl;
        }
        else{
        cout<<0<<endl;
        }
    }
}