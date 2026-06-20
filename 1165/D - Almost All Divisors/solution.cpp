//D. Almost All Divisors
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
multiply min and max element if it's valid otherwise -1
*/
 
void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
 
void solve() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int maxi=*max_element(arr.begin(),arr.end());
    int mini=*min_element(arr.begin(),arr.end());
    int x=maxi*mini;
    vector<int>forme;
    for(int i=2;i*i<=x;i++){
        if(x%i==0){
            forme.push_back(i);
            if(x/i!=i){
                forme.push_back(x/i);
            }
        }
    }
    sort(forme.begin(),forme.end());
    if(arr==forme){
        cout<<x<<endl;
    }
    else{
        cout<<-1<<endl;
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