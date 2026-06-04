//A. One and Two
 
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
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]==2){
                count++;
            }
        }
        int two=0;
        if(count%2!=0){
            cout<<-1<<endl;
        }
        else if(count==0){
            cout<<1<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                if(two==count/2){
                    cout<<i<<endl;
                    break;
                }
                if(arr[i]==2){
                    two++;
                }
            }
        }
    }
}