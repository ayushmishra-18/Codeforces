//B. Array merging
 
#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        vector<int>ca(2*n+1),cb(2*n+1);
        int z=1;
        for(int i=0;i<n;i++) {
            if(i>0 && a[i]==a[i-1]){
                z++;
            }
            else{
                z=1;
            }
            ca[a[i]]=max(ca[a[i]],z);
        }
        z=1;
        for(int i=0;i<n;i++){
            if(i>0 && b[i]==b[i-1]){
                z++;
            }
            else{
                z=1;
            }
            cb[b[i]]=max(cb[b[i]], z);
        }
    int ans=0;
    for(int i=0;i<2*n+1;i++) {
        ans=max(ans,ca[i]+cb[i]);
    }
    cout<<ans<<endl;
    }
}