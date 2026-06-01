#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int counta=0;
    int countd=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            counta++;
        }
        else if(s[i]=='D'){
            countd++;
        }
    }
    if(counta==countd){
        cout<<"Friendship";
    }
    if(counta>countd){
        cout<<"Anton";
    }
    if(counta<countd){
        cout<<"Danik";
    }
}