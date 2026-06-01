#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<s.size();i++){
        bool seen=0;
        for(int j=0;j<i;j++){
            if(s[i]==s[j]){
                seen=1;
                break;
            }
        }
        if(seen==0){
            count++;
        }
    }
    if(count%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
}