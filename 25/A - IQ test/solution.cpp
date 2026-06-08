//A. IQ test
 
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
    vector<int>arr(n+1);
    for (int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int even=0,odd=0;
    int a,b;
    for(int i=1;i<=n;i++){
        if(arr[i]%2==0){
            even++;
            a=i;
        }
        else{
            odd++;
            b=i;
        }
    }
    if(even==1){
        cout<<a<<endl;
    }
    if(odd==1){
        cout<<b<<endl;
    }
    
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