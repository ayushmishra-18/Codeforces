#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ar[n];
        for(int i=0;i<n;i++){
            ar[i]=arr[i];
        }
        sort(ar,ar+n);
        if(k==1){
            int z=0;
            for(int i=0;i<n;i++){
                if(ar[i]!=arr[i]){
                    cout<<"NO"<<endl;
                    z=1;
                    break;
                }
            }
            if(z==0){
                cout<<"YES"<<endl;
            }
        }
        else if(k>1){
            cout<<"YES"<<endl;
        }
    }
}