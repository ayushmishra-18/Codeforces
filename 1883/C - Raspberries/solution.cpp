//C. Raspberries
 
#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int e=0,o=0;
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                e++;
            }
            if(arr[i]%2!=0){
                o++;
            }
            if(arr[i]%k==0){
                ans=0;
            }
            ans=min(ans,k-arr[i]%k);
        }
        if(k==4){
            if(e>=2){
                ans=min(ans,(int)0);
            }
            else if(e==1){
                ans=min(ans,(int)1);
            }
            else if(e==0){
                ans=min(ans,(int)2);
            }
        }
        cout<<ans<<endl;
    }
}