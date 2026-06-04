#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int hao=0;
        while(n>=3){
            if(n==3){
                hao=hao+1;
                n=n-3;
            }
            if(n>3 && n%2!=0){
                hao=hao+n/2;
                n=1;
            }
            if(n>3 && n%2==0){
                hao=hao+n/2-1;
                n=2;
            }
        }
        cout<<hao<<endl;
    }
}