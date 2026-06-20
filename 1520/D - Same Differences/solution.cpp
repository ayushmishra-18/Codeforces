//D. Same Differences
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
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
        vector<pair<int,int>>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i].second;
            arr[i].first=arr[i].second-i;
        }
        sort(arr.begin(),arr.end());
        int khushi=0;
        int me=1;
        for(int i=1;i<n;i++){
            if((arr[i].first)==arr[i-1].first){
                me++;
            }
            else{
                khushi=khushi+(me*(me-1))/2;
                me=1;
            }   
        }
        khushi=khushi+(me*(me-1))/2;
        cout<<khushi<<endl;
    }
    return 0;
}