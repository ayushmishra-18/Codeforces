//A. Slimes on a Line
 
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
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int maxi=*max_element(arr.begin(),arr.end());
        int mini=*min_element(arr.begin(),arr.end());
        cout<<ceil(1.0*(maxi-mini)/2)<<endl;
    }
    return 0;
}