//A. Helmets in Night Light
 
#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,p;
        cin>>n>>p;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        vector<pair<int,int>>v(n);
        for(int i=0;i<n;i++){
            v[i]={b[i],a[i]};
        }
        sort(v.begin(),v.end());
        int c=p,s=1;
        for(int i=0;i<n;i++){
            if(s>=n){
                break;
            }
            int cost=v[i].first;
            int limit=v[i].second;
            if(cost<p){
                int z=min(limit,n-s);
                c=c+z*cost;
                s=s+z;
            }
            else{
                break;
            }
        }
        if(s<n){
            c=c+(n-s)*p;
        }
        cout<<c<<endl;
    }
}