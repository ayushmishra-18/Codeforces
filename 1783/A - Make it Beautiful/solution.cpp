//A. Make it Beautiful
 
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
        int mini=*min_element(arr,arr+n);
        int maxi=*max_element(arr,arr+n);
        if(mini==maxi){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            swap(arr[1],arr[n-1]);
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
}