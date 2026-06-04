#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int arr1[n];
        for(int i=0;i<n;i++){
            arr1[i]=arr[i];
        }
        sort(arr1,arr1+n);
        int a=0;
        for(int i=0;i<n;i++){
            if(arr[i]!=arr1[i]){
                a=1;
                break;
            }
        }
        int res=INT_MAX;
        for(int i=0;i<n-1;i++){
            int b=arr[i+1]-arr[i];
            res=min(b,res);
        }
        if(a==1){
            cout<<0<<endl;
        }
        else{
            cout<<(res/2)+1<<endl;
        }
    }
}