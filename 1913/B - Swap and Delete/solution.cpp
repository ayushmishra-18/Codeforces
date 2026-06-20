//B. Swap and Delete
 
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
        int l=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0' && o>0){
                o--;
                l++;
            }
            else if(s[i]=='1' && z>0){
                z--;
                l++;
            }
            else{
                break;
            }
        }
        cout<<s.size()-l<<endl;
 
    }
}