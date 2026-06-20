#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n),arr1(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            arr1[i]=arr[i];
        }
        int mini=*min_element(arr.begin(),arr.end());
        int maxi=*max_element(arr.begin(),arr.end());
        sort(arr1.begin(),arr1.end());
        int p=0;
        if(arr==arr1){
            cout<<-1<<endl;
            p=1;
        }
        int ans=2e9;
        for(int i=0;i<n;++i){
            if(arr[i]!=arr1[i]){
                int mi=arr[i]-mini;
                int ma=maxi-arr[i];
                int k=max(mi,ma);
                ans=min(ans,k);
            }
        }
        if(p==0){
            cout<<ans<<endl;
        }
    }
}