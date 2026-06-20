//A. Amr and Music
 
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
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i].first;
        arr[i].second=i+1;
    }
    int sum=0;
    sort(arr.begin(),arr.end());
    int i=0;
    int count=0;
    vector<int>forme;
    while(i<n && sum<=k-arr[i].first){
        count++;
        sum+=arr[i].first;
        forme.push_back(arr[i].second);
        i++;
    }
    cout<<count<<endl;
    for(int i=0;i<forme.size();i++){
        cout<<forme[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}