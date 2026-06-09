//A. Odd Selection
 
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
    int n,x;
    cin>>n>>x;
    vector<int>arr(n);
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int even=0,odd=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    if(odd==0){
        cout<<"No"<<endl;
    }
    else if(even==0 && x%2==0){
        cout<<"No"<<endl;
    }
    else if(x==n && odd%2==0){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
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