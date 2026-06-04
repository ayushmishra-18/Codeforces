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
        int ne=0,sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(arr[i]<0){
                ne++;
            }
 
        }
        int count=0;
        while(sum<0 || ne%2!=0){
            for(int i=0;i<n;i++){
                if(arr[i]<0){
                    arr[i]=1;
                    ne--;
                    sum+=2;
                    count++;
                    break;
                }
            }
        }
        cout<<count<<endl;
    }
}