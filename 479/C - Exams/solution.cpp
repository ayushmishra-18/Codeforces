//C. Exams
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
3
(5 2) (3 1) (4 2)
-> (3 1) (4 2) (5 2)
 
3
(6 1) (5 2) (4 3)
-> (4 3) (5 2) (6 1)
 
first we try if early date is possible 
else do on the schedule date
 
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
    for(int i=0;i<n;i++){
        cin>>arr[i].first;
        cin>>arr[i].second;
    }
    sort(arr.begin(),arr.end());
    int a=-1;
    for(int i=0;i<n;i++){
        if(arr[i].second>=a){
            a=arr[i].second;
        }
        else{
            a=arr[i].first;
        }
    }
    cout<<a<<endl;
    
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