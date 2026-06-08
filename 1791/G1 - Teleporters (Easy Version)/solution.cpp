//G1. Teleporters (Easy Version)
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
points -> 0 1 2 3 4 5 . . . . .
teleporter -> 1 2 3 4 5 6
 
cost to use teleporter = ai + i
 
*/
 
void fast_io() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
 
void solve() {
    int n,c;
    cin>>n>>c;
    vector<int>arr(n);
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>forme(n);
    for(int i=0;i<n;i++){
        forme[i]=arr[i]+i+1;
    }
    sort(forme.begin(),forme.end());
    int count=0;
    for(int i=0;i<n;i++){
        if(c>=forme[i]){
            c-=forme[i];
            count++;
        }
        else{
            break;
        }
    }
    cout<<count<<endl;
    
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