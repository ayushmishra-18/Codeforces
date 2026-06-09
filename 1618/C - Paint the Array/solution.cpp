//C. Paint the Array
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
 
*/
 
void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
 
void solve() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int g1=0,g2=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            g1=__gcd(g1,arr[i]);
        }
        else{
            g2=__gcd(g2,arr[i]);
        }
    }
    bool a=true;
    for(int i=1;i<n;i=i+2){
        if(arr[i]%g1==0){
            a=false;
            break;
        }
    }
    bool b=true;
    for(int i=0;i<n;i=i+2){
        if(arr[i]%g2==0){
            b=false;
            break;
        }
    }
    if(a){
        cout<<g1<<endl;
    }
    else if(b){
        cout<<g2<<endl;
    }
    else{
        cout<<0<<endl;
    }
    
}
 
signed main() {
    fast_io();
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}