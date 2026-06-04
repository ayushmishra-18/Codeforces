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
        int count=0;
        for(int i=0;i<=n-4;i++){
            if(s[i]=='2' && s[i+1]=='0' && s[i+2]=='2' && s[i+3]=='5'){
                count++;
            }
        }
        int res=4;
        for(int i=0;i<=n-4;i++){
            int a=0;
            if(s[i]!='2'){
                a++;
            }
            if(s[i+1]!='0'){
                a++;
            }
            if(s[i+2]!='2'){
                a++;
            }
            if(s[i+3]!='6'){
                a++;
            }
            res=min(res,a);
        }
        cout<<min(count,res)<<endl;
    }
}