//D. Balanced Round
 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;
        long long int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int count=1;
        int ans=1;
        for(int i=0;i<n-1;i++){
            if(arr[i+1]-arr[i]<=k){
                count++;
            }
            else{
                ans=max(ans,count);
                count=1;
            }
        }
        ans=max(ans,count);
        cout<<n-ans<<endl;
    }
}