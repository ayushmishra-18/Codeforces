//D. Odd Queries
 
#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int> arr(n+1);
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        vector<int> v(n+1,0);
        for(int i=1;i<=n;i++){
            v[i]=v[i-1]+arr[i];
        }
        while(q--){
            int l,r,k;
            cin>>l>>r>>k;
            int sum=0;
            int x= v[l-1];
            int y=v[n]-v[r];
            sum=x+y+k*(r-l+1);
            if(sum%2!=0){
                cout<<"YES"<<endl;
            }
            if(sum%2==0){
                cout<<"NO"<<endl;
            }
        }
        
    }
}