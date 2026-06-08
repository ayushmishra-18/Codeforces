//A. Laptops
 
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
    vector<pair<int,int>>arr(n);
    for (int i=0;i<n;i++){
        cin>>arr[i].first;
        cin>>arr[i].second;
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-1;i++){
        if(arr[i].second>arr[i+1].second){
            cout<<"Happy Alex"<<endl;
            return;
        }
    }
    cout<<"Poor Alex"<<endl;
    
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