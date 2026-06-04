#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int anna=0,katie=0;
        katie+=c/2;
        anna=c-katie;
        anna+=a;
        katie+=b;
        if(anna>katie){
            cout<<"First"<<endl;
        }
        else{
            cout<<"Second"<<endl;
        }
 
    }
}