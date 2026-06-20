//A. Johnny and Ancient Computer
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin>>a>>b;
        int c=max(a,b);
        int d=min(a,b);
        int e=c/d;
          if(c%d!=0){
            cout<<-1<<"
";
            continue;
        }
        int count=0,x=0;
        while(e>1){
            if(e%8==0){
                e/=8;
            }
            else if(e%4==0){
               e/=4; 
            }
           else if(e%2==0){
                e/=2;
            }
            else{
                x=1;
                break;
            }
            count++;
        }
        if(x==1){
            cout<<-1<<"
";
        }
        else{
            cout<<count<<"
";
        }
        
    }
}