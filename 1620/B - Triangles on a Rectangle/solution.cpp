//B. Triangles on a Rectangle
 
#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int w,h;
        cin>>w>>h;
        int a=0;
        for(int i=0;i<4;i++){
            int k;
            cin>>k;
            int f,l;
            for(int j=0;j<k;j++){
                int x;
                cin>>x;
                if(j==0){
                    f=x;
                }
                if(j==k-1){
                    l=x;
                }
            }
            int maxi=l-f;
            if(i<2){
                a=max(a,maxi*h);
            }
            else{
                a=max(a,maxi*w);
            }
        }
        cout<<a<<endl;
    }
}