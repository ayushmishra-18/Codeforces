#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int x=0,y=0;
    while(a>0 && b>0){
        a=a-1;
        b=b-1;
        x=x+1;
        if(a==0){
            y=y+b/2;
        }
        if(b==0){
            y=y+a/2;
        }
    }
    cout<<x<<" "<<y;
    
}