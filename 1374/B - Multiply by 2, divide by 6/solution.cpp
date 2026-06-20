//B. Multiply by 2, divide by 6
 
#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=-1;
        int S=0,T=0;
        while(n%2==0){
            n=n/2;
            S++;
        }
        while(n%3==0){
            n=n/3;
            T++;
        }
        if(n!=1){
            cout<<-1<<endl;
        }
        else if(S>T){
            cout<<-1<<endl;
        }
        else{
            cout<<(T-S)+T<<endl;
        }
    }
}