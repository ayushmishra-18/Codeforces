//B. Sum of Medians
 
#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n*k];
        for(int i=0;i<n*k;i++){
            cin>>arr[i];
        }
        int m=0;
        int s=n*k;
        for(int i=0;i<k;i++){
            s=s-(n/2+1);
            m=m+arr[s];
        }
        cout<<m<<endl;
    }
}