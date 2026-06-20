//B. Luntik and Subsequences
 
#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int z=0,o=0;
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                o++;
            }
            if(arr[i]==0){
                z++;
            }
        }
        cout<<o*(long long)pow(2,z)<<endl;
    }
}