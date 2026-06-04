#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int time=240;
    int i=1;
    while(time-k>=0){
        time=time-5*i;
        if(time>=k  && i<=n){
            i++;
        } 
    }
    cout<<i-1;
}