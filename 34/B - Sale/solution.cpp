//B. Sale
 
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
 
signed main() {
    fast_io();
    int n,m;
    cin>>n>>m;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int sum=0;
    for(int i=0;i<m;i++){
        if(arr[i]<0){
            arr[i]=-1*arr[i];
            sum+=arr[i];
        }
        else{
            break;
        }
        
    }
    cout<<sum<<endl;
        
    
    return 0;
}