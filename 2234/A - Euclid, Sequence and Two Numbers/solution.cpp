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
        sort(arr.rbegin(),arr.rend());
        int a=0;
        for(int i=2;i<n;i++){
            if(arr[i]!=arr[i-2]%arr[i-1]){
                a=1;
                break;
            }
        }
        if(a==0){
            cout<<arr[0]<<" "<<arr[1]<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}