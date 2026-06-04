#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,x,y;
        cin>>n>>x>>y;
        string s;
        cin>>s;
        long long int p[n];
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        long long int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+p[i];
        }
        long long int mina=0,minb=0;
        long long int c0=0,c1=0;
 
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                mina=mina+(p[i]/2)+1;
                c0++;
            }
            if(s[i]=='1'){
                minb=minb+(p[i]/2)+1;
                c1++;
            }
        }
        bool z=((mina<=x && minb<=y) && (x+y)>=sum);
        if(c0==0){
            if(y<x+c1){
                z=false;
            }            
        }
        else if(c1==0){
            if(x<y+c0){
                z=false;
            }
        }
        if(z==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}