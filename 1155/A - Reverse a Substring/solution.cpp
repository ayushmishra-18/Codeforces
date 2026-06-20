//A. Reverse a Substring
 
#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a=0;
    for(int i=0;i<n-1;i++){
        if(s[i]>s[i+1]){
            cout<<"YES"<<endl;
            a=1;
            cout<<i+1<<" "<<i+2;
            break;
        }
    }
    if(a==0){
        cout<<"NO"<<endl;
    }
    
}