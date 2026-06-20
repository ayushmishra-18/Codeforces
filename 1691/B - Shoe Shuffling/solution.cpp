//B. Shoe Shuffling
 
#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int a=0;
        for(int i=0;i<n;i++){
            if(!(i>0 && arr[i]==arr[i-1]) && !(i< n-1 && arr[i]==arr[i+1])){
                a=1;
                break;
            }
            
        }
        if(a==1){
            cout<<-1<<endl;
        }
        else{
            int b=0;
            for(int i=0;i<n;i++){
                if(i==n-1 || arr[i]!=arr[i+1]){
                    cout<<b+1<<" ";
                    b=i+1;
                }
                else{
                    cout<<i+2<<" ";
                }
            }
            cout<<endl;
        }
    }
}