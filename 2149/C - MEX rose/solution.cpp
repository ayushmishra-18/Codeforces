//C. MEX rose
 
#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int khushi=0;
        for(int i=0;i<n;i++){
            if(arr[i]==k){
                khushi++;
            }
        }
        sort(arr.begin(),arr.end());
        arr.erase(unique(arr.begin(),arr.end()),arr.end());
        int me=k;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=0 && arr[i]<k){
                me--;
            }
        }
        cout<<max(me,khushi)<<endl;
    }
}