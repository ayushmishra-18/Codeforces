//C. Numbers on Whiteboard
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
/*
n=4
1 2 3 4
4 3 -> 4 => 1 2 4
4 2 -> 3 => 1 3
3 1 -> 2 => 2
 
n=5
1 2 3 4 5
5 4 -> 5 => 1 2 3 5
5 3 -> 4 => 1 2 4
4 2 -> 3 => 1 3
3 1 -> 2 => 2
 
 
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
        vector<int>arr;
        for(int i=1;i<=n;i++){
            arr.push_back(i);
        }
        vector<int>res;
        while(arr.size()>1){
            int s=arr.size();
            int sum=arr[s-1]+arr[s-2];
            res.push_back(arr[s-1]);
            res.push_back(arr[s-2]);
            arr.pop_back();
            arr.pop_back();
            arr.push_back(ceil(1.0*sum/2));
        }
        cout<<arr.back()<<endl;
        for(int i=0;i<res.size();i=i+2){
            cout<<res[i]<<" "<<res[i+1]<<endl;
        }
        
        
    }
    return 0;
}