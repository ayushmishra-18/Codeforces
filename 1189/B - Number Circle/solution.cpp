//B. Number Circle
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
if the largest element is greater than sum of 2maximum and 3maximum then simply NO
else if print largent element then desending sequence and at last 2maximum element
 
*/
 
void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
 
signed main() {
    fast_io();
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    if(arr[n-2]+arr[n-3]<=arr[n-1]){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        cout<<arr[n-1]<<" ";
        for(int i=n-3;i>=0;i--){
            cout<<arr[i]<<" ";
        }
        cout<<arr[n-2]<<endl;
    }
 
        
    
    return 0;
}