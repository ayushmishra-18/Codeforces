//B. Assigning to Classes
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
minimize -> |median1-median2|
6 5 4 1 2 3
1 3 5
2 4 6
skill of grp => 4-3=1
 
13 4 20 13 2 5 8 3 17 16
2 3 4 5 8 13 13 16 17 20 => 5
 
observation => difference of the two middle element
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
        vector<int>arr(2*n);
        for(int i=0;i<2*n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int ans=abs(arr[n]-arr[n-1]);
        cout<<ans<<endl;
    }
    return 0;
}