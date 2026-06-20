//C. Yarik and Array
 
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
        int sum=0;
        int ans=arr[0];
        for(int i=0;i<n;i++){
            if(i>0 && (abs(arr[i]%2)==abs(arr[i-1]%2))){
                sum=0;
            }
            sum=sum+arr[i];
            ans=max(ans,sum);
            if(sum<0){
                sum=0;
            }
            
        }
        cout<<ans<<endl;
    }
}