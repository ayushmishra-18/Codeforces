//B. Make Almost Equal With Mod
 
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
        int a=0,b=0;
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                a++;
            }
            if(arr[i]%2!=0){
                b++;
            }
        }
        if(a>0 && b>0){
            cout<<2<<endl;
        }
        else{
            int k=4;
            while(true){
                set<int>r;
                for(int i=0;i<n;i++){
                    r.insert(arr[i]%k);
                }
                if(r.size()==2){
                    cout<<k<<endl;
                    break;
                }
                k=k*2;
            }
        }
    }
 
}