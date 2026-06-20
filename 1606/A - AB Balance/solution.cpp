//A. AB Balance
 
#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        int ab=0,ba=0;
        for(int i=0;i<n;i++){
            if(i+1<n && s[i]=='a' && s[i+1]=='b'){
                ab++;
            }
            if(i+1<n && s[i]=='b' && s[i+1]=='a'){
                ba++;
            }
            
        }
        for(int i=0;i<n;i++){
            if(ab>ba){
                if(s[0]=='b'){
                    s[0]='a';
                }
                if(s[n-1]=='b'){
                    s[n-1]='a';
                }
            }
            if(ab<ba){
                if(s[0]=='a'){
                    s[0]='b';
                }
                if(s[n-1]=='a'){
                    s[n-1]='b';
                }
            }
        }
        cout<<s<<endl;
    }
}