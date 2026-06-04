#include<bits/stdc++.h>
using namespace std;
int main(){
    
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        int a=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                cout<<0<<endl;
                a=1;
                break;
            }
            if(arr[i]<0){
                arr[i]=-1*arr[i];
            }
        }
        int mini=*min_element(arr,arr+n);
        if(a==0){
            cout<<mini<<endl;
        }
    
}