//B. The 67th 6-7 Integer Problem
 
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
    int t;
    cin>>t;
    while(t--){
        int n=7;
        vector<int>arr(n);
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        int maxi=*max_element(arr.begin(),arr.end());
        sum=sum-maxi;
        sum=-sum;
 
        cout<<sum+maxi<<endl;;
        
    }
    return 0;
}