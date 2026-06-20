//C. Less or Equal
 
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
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int x=arr[k-1];
 
    if(k==0){
        if(arr[0]>1){
            cout<<1<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        return;
    }
    
    if(k<n && arr[k]==x){
        cout<<-1<<endl;
    }
    else{
        cout<<x<<endl;
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