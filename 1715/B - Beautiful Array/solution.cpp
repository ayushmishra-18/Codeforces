//B. Beautiful Array
 
#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,b,s;
        cin>>n>>k>>b>>s;
        if(s<k*b || s>k*b+((k-1)*n)){
            cout<<-1<<endl;            
        }
        else{
            vector<int>arr(n);
            arr[0]=k*b;
            int a=s-(k*b);
            for(int i=0;i<n;i++){
                if(a>0){
                    arr[i]+=(min(k-1,a));
                    a=a-min(k-1,a);
                }
                else{
                    break;
                }
            }
             for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        }
    }
}