//B. 01 Game
 
#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int o=0,z=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                o++;
            }
            if(s[i]=='0'){
                z++;
            }
        }
        int count=min(o,z);
        if(count%2!=0){
            cout<<"DA"<<endl;
        }
        else{
            cout<<"NET"<<endl;
        }
    }
} 