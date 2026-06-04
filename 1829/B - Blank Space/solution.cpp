//B. Blank Space
 
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
        int res=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                count++;
                res=max(res,count);
            }
            else{
                count=0;
            }
            res=max(res,count);
        }
        cout<<res<<endl;
    }
}