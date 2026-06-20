//A. Red Versus Blue
 
#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,r,b;
        cin>>n>>r>>b;
        int k=r/(b+1);
        int l=r%(b+1);
        for(int i=0;i<=b;i++){
            int count=k;
            if(l>0){
                count=k+1;
            }
            l--;
            for(int j=0;j<count;j++){
                cout<<'R';
            }
            if(i<b){
                cout<<'B';
            }
        }
        cout<<endl;   
    }
}