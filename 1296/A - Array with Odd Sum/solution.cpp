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
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int e=0,o=0;
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                e++;
            }
            if(arr[i]%2!=0){
                o++;
            }
        }
        if(o>0 && e>0){
            cout<<"YES"<<endl;
        }
        else if(o%2!=0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}