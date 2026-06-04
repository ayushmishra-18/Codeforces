#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ch[n];
    for(int i=0;i<n;i++){
        cin>>ch[i];
    }
    bool hard=false;
    for(int i=0;i<n;i++){
        if(ch[i]==1){
            hard=true;
            break;
        }
    }
    if(hard){
        cout<<"HARD";
    }
    else{
        cout<<"EASY";
    }
}