//B. Absolute Cinema
 
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
    vector<int>arr(n),brr(n);
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cin>>brr[i];
    }
    for(int i=0;i<n;i++){
        if(brr[i]<arr[i]){
            swap(arr[i],brr[i]);
        }
    }
    int maxi=*max_element(arr.begin(),arr.end());
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=brr[i];
    }
    cout<<maxi+sum<<endl;
    
    
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