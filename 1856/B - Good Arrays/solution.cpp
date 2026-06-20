//B. Good Arrays
 
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
        int sum=0,a=0;
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
            if(arr[i]==1){
                a++;
            }
        }
        if(n==1){
            cout<<"NO"<<endl;
        }
        else if(sum>=n+a){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}