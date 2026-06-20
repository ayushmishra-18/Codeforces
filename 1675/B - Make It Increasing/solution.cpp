//B. Make It Increasing
 
#include<bits/stdc++.h>
using namespace std;
#define int long long int 
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        int a=0;
        bool y=true;
        for(int i=n-2;i>=0;i--){
            while(arr[i]>=arr[i+1]){
                if(arr[i]==0){
                    y=0;
                    break;
                }
                arr[i]=arr[i]/2;
                a++;
            }
            if(y==0){
                break;
            }
        }
        if(y==1){
            cout<<a<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}