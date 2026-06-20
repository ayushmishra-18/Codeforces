//B. Luke is a Foodie
 
#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int a=0;
        int l=arr[0]-x,r=arr[0]+x;
        for(int i=1;i<n;i++){
            int p=arr[i]-x,q=arr[i]+x;
            l=max(l,p);
            r=min(r,q);
            if(l>r){
                a++;
                l=p;
                r=q;
            }
        }
        cout<<a<<endl;
    }
    
}