//A. Add and Divide
 
#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int ans=99999999;
        for(int i=0;i<=30;i++){
            if(b+i==1){
                continue;
            }
            int curr_a=a;
            int curr_b=b+i;
            int count=i;
            while(curr_a>0){
                curr_a/=curr_b;
                count++;
            }
            ans=min(ans,count);
        }
        cout<<ans<<endl;
    }
}