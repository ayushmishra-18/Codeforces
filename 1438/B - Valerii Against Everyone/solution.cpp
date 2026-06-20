//B. Valerii Against Everyone
 
#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int b[n];
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        set<int>st;
        for(int i=0;i<n;i++){
            st.emplace(b[i]);
        }
        if(st.size()<n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}