#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,p;
    cin>>s;
    cin>>p;
    for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
    }
    for(int j=0;j<p.size();j++){
        p[j]=tolower(p[j]);
    }
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]>p[i]){
            cout<<"1";
            return 0;
        }
        if(s[i]<p[i]){
            cout<<"-1";
            return 0;
        }
    }
    cout<<"0";
    return 0;
}