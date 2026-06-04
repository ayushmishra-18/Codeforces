//B. NIT Destroys the Universe
 
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
        int a=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]!=0){
                if(a==0){
                    count++;
                    a=1;
                }
            }
            else{
                a=0;
            }
        }
        cout<<min(count,(int)2)<<endl;
    }
}