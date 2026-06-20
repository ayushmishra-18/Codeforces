#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int sum=0,ans=0;
        for(int i=0;i<n;i++){
            if(s[i]==')'){
                sum--;
            }
            if(s[i]=='('){
                sum++;
            }
            if(sum<0){
                ans++;
                sum=0;
            }
        }
        cout<<ans<<endl;
    }
}