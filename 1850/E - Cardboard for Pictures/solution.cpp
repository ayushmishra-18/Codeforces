//E. Cardboard for Pictures
 
#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;
        vector<int>arr(n);
        int k=0,l=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            k+=(arr[i]*arr[i]);
            l+=arr[i];
        }
        int x=0,y=0;
        int z=k-c;
        long double f=(long double)z/4;
        long double d=(long double)(l*l)-4*n*f;
        long double D=sqrt(d);
        int i=(int)(-l+D)/(2*n);
        int j=(int)(-l-D)/(2*n);
        cout<<max(i,j)<<endl;
    }
}