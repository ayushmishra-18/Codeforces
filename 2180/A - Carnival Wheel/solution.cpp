#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int l,a,b;
        cin>>l>>a>>b;
        int sum = a;
        int res = a;
        while(true){
            sum=(sum+b)%l;
            res=max(sum,res);
            if(sum==a){
                break;
            }
        }
        cout<<res<<endl;
    }
}