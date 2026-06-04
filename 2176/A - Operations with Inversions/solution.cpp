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
        int count=0;
        if(a==0){
            cout<<0<<endl;
        }
        else{
            int b=INT_MIN;
            for(int i=0;i<n;i++){
                if(arr[i]<b){
                    count++;
                }
                else{
                    b=max(b,arr[i]);
                }
            }
            cout<<count++<<endl;
        }
    }
}