#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int h=0;
        int x=0,y=0;
        int z=1;
        while(1){
            int n1=x;
            int n2=y;
            if(h%2==0){
                n1=n1+z;
            }
            else{
                n2=n2+z;
            }
            if((n1<=a && n2<=b) || (n1<=b && n2<=a)){
                x=n1;
                y=n2;
                h++;
                z=z*2;
            }
            else{
                break;
            }
        }
        cout<<h<<endl;
    }
}