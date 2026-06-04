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
        int a=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(__gcd(arr[i],arr[j])<=2){
                    cout<<"YES"<<endl;
                    a=1;
                    break;
                }
            }
            if(a==1){
                break;
            }
        }
        if(a==0){
            cout<<"NO"<<endl;
        }
    }
}