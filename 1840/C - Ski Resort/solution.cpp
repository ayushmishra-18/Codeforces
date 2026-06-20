//C. Ski Resort
 
#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,q;
        cin>>n>>k>>q;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int a=0,ans=0;
        for(int i=0;i<n;i++){
            if(arr[i]<=q){
                a++;
            }
            else{
                if(a>=k){
                    int x=a-k+1;
                    ans=ans+(x*(x+1))/2;
                }
                a=0;
            }
        }
        if(a>=k){
            int x=a-k+1;
            ans=ans+(x*(x+1))/2;
        }
        cout<<ans<<endl;
    }
}