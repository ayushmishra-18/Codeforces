#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n),b(n),c(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            cin>>c[i];
        }
        
        int x=0,y=0;
        for(int i=0;i<n;i++){
            int k=0;
            for(int j=0;j<n;j++){
                if(a[j]>=b[(i+j)%n]){
                    k=1;
                    break;
                }
            }
            if(k==0){
                x++;
            }
        }
 
        for(int i=0;i<n;i++){
            int k=0;
            for(int j=0;j<n;j++){
                if(b[j]>=c[(i+j)%n]){
                    k=1;
                    break;
                }
            }
            if(k==0){
                y++;
            }
        }
        cout<<n*x*y<<endl;
    }
}