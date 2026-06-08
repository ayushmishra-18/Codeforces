//B. A and B and Compilation Errors
 
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
    vector<int>arr(n),brr(n-1),crr(n-2);
    int suma=0,sumb=0,sumc=0;
    for (int i=0;i<n;i++){
        cin>>arr[i];
        suma+=arr[i];
    }
    for (int i=0;i<n-1;i++){
        cin>>brr[i];
        sumb+=brr[i];
    }
    for (int i=0;i<n-2;i++){
        cin>>crr[i];
        sumc+=crr[i];
    }
    cout<<suma-sumb<<endl;
    cout<<sumb-sumc<<endl;
}
 
signed main() {
    fast_io();
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}