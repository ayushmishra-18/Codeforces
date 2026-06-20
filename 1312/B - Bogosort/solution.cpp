//B. Bogosort
 
#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        reverse(arr.begin(),arr.end());
        for(auto x:arr){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}