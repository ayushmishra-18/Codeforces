//A. Two Permutations
 
#include<bits/stdc++.h>
using namespace std;
#define int long long int 
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        if(n-a-b>=2 || (((a==b) && (a==n))&& b==n)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}