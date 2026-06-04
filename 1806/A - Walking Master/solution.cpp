//A. Walking Master
 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int count=0;
        if((d-b>=0)&&(d-c-b+a>=0)){
            count=2*d-2*b+a-c;
        }
        else{
            count=-1;
        }
        cout<<count<<endl;
    }
}