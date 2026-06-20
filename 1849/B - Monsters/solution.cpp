//B. Monsters
 
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
        vector<pair<int,int>>v(n);
        for(int i=0;i<n;i++){
            int a=arr[i]%k;
            if(a==0){
                a=k;
            }
            v[i]={-a,i+1};
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            cout<<v[i].second<<" ";
        }
        cout<<endl;
    }
}