//D. Zero Remainder Array
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
    10 6
     8 7 1 8 3 7 5 10 8 9
z => 2 1 1 2 3 1 5 4 2 3
m => 4 5 5 4 3 5 1 2 4 3
mp => (1,1) (2,1) (3,2) (4,3) (5,3)
 
 
 
*/
 
void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
 
void solve() {
    int n,k;
    cin>>n>>k;
    vector<int>arr(n+1);
    for (int i=1;i<=n;i++){
        cin>>arr[i];
    }
    map<int,int>mp;
    for(int i=1;i<=n;i++){
        int z=arr[i]%k;
        if(z>0){
            int m=k-z;
            mp[m]++;
        }
    }
    if(mp.empty()){
        cout<<0<<endl;
        return;
    }
    int a=0;
    for(auto pr :mp){
        int p=pr.first;
        int q=pr.second;
        int r=p+(q-1)*k;
        a=max(a,r);
    }
    cout<<a+1<<endl;
    
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