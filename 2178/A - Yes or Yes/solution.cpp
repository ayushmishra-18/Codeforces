#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int a=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='Y'){
                a++;
            }
        }
        if(a<=1){
            cout<<"YES"<<endl;
        }
        
        else{
            cout<<"NO"<<endl;   
        }
    }
}