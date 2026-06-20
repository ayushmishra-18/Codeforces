#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>b(n+1,0);
        for(int i=n-1;i>=0;i--){
            b[i]=b[i+1]+a[i];
        }
        int ans=INT64_MIN;
        int sum=0;
        for(int i=0;i<n;i++){
            int z=b[i+1];
            ans=max(ans,sum-z);
            if(i==0){
                sum=sum+a[0];
            }
            else{
                sum=sum+abs(a[i]);
            }
        }
        cout<<ans<<endl;
    }
}