#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int a=arr[0];
        for(int i=0;i<n-1;i++){
            a=max(arr[i+1]-arr[i],a);
        }
        int b=2*(x-arr[n-1]);
        cout<<max(a,b)<<endl;
    }
}