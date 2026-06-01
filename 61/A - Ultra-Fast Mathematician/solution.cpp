#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,p;
    cin>>s;
    cin>>p;
    for(int i=0;i<s.size();i++){
        if((s[i]=='0' && p[i]=='0') || (s[i]=='1' && p[i]=='1')){
            cout<<'0';
        }
        if((s[i]=='0' && p[i]=='1')||(s[i]=='1' && p[i]=='0')){
            cout<<'1';
        }
    }
}