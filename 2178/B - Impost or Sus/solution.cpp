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
        int n=s.size();
        if (s[0]=='u') {
            s[0]='s';
            a++;
        }
        if (s[n-1]=='u') {
            s[n-1]='s';
            a++;
        }
        int u=0;
        for (int i=0;i<n;i++){
            char ch=s[i];
            if(ch=='u') {
                u++;
            } 
            else {
                a+=u/2;
                u=0;
            }
        }       
        cout<<a<<endl;
    }
}