#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int countl=0;
    int countu=0;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]>='A' && s[i]<='Z'){
            countu++;
        }
        if(s[i]>='a' && s[i]<='z'){
            countl++;
        }
    }
    for(int i=0;i<n;i++){
        if(countl>=countu){
            s[i]=tolower(s[i]);
        }
        else{
            s[i]=toupper(s[i]);
        }
    }
    cout<<s;
}